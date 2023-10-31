#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    char nome[100];
    float valor_unitario;
    int quantidade;
};

void mostrar_menu() {
    printf("\nO que deseja fazer?\n");
    printf("[1] - Adicionar item\n");
    printf("[2] - Obter valor total da compra\n");
    printf("[3] - Mostrar relat�rio (lista de itens)\n");
    printf("[4] - Sair\n");
    printf("[5] - Limpar tela\n");
}

void adicionar_item(struct item *items, int *index_para_adicionar, int *qtd_items) {
    if (*index_para_adicionar >= *qtd_items) {
        (*qtd_items)++;
        items = (struct item*)realloc(items, (*qtd_items) * sizeof(struct item));
    }

    char nome[100];
    float valor_unitario = 0;
    int quantidade = 0;

    printf("Digite o nome do item: ");
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o valor unitário do item: ");
    scanf("%f", &valor_unitario);

    printf("Digite a quantidade do item: ");
    scanf("%d", &quantidade);

    strcpy(items[*index_para_adicionar].nome, nome);
    items[*index_para_adicionar].valor_unitario = valor_unitario;
    items[*index_para_adicionar].quantidade = quantidade;

    (*index_para_adicionar)++;
}

float calcular_valor_total(struct item *items, int index_para_adicionar) {
    float valor_total = 0;

    for (int i = 0; i < index_para_adicionar; i++) {
        if (items[i].quantidade != 0) {
            valor_total += items[i].valor_unitario * items[i].quantidade;
        }
    }

    return valor_total;
}

void mostrar_relatorio(struct item *items, int index_para_adicionar) {
    printf("\nRelatório dos itens\n");
    for (int i = 0; i < index_para_adicionar; i++) {
        if (items[i].quantidade != 0 || items[i].valor_unitario != 0) {
            printf("Nome: %s, Valor: %f, Quantidade: %d\n",
                   items[i].nome, items[i].valor_unitario, items[i].quantidade);
        }
    }
}

int main() {
    int qtd_items = 5;
    int index_para_adicionar = 0;
    struct item *items = (struct item*)malloc(qtd_items * sizeof(struct item));
    int sair = 0;

    while (sair == 0) {
        mostrar_menu();
        int opcao = 0;

        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            adicionar_item(items, &index_para_adicionar, &qtd_items);
        } else if (opcao == 2) {
            float valor_total = calcular_valor_total(items, index_para_adicionar);
            printf("Valor total da compra: %f\n", valor_total);
        } else if (opcao == 3) {
            mostrar_relatorio(items, index_para_adicionar);
        } else if (opcao == 4) {
            sair = 1;
        } else if (opcao == 5) {
            system("cls");
        } else {
            printf("Opção inválida\n");
        }
    }

    free(items);
    return 0;
}
