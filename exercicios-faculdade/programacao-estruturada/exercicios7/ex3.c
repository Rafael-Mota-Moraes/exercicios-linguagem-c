/*
3. Fazer um programa para gerenciamento de compras em um supermercado, com as seguintes
características:
c. O programa deve definir um array (vetor) para permitir criar uma lista de compras no
um supermercado. O tamanho inicial do array deve ser 5 e deve aumentar à medida que
mais do que 5 elementos sejam adicionados à lista (dica: utilizar alocação e desalocação
dinâmicas).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
	char nome[100];
	float valor_unitario;
	int quantidade;
};

void mostrar_lista() {
	printf("\n O que deseja fazer\n");
	
	printf("[1] - Adicionar item\n");
	printf("[2] - Obter valor total da compra\n");
	printf("[3] - Mostrar relatorio (lista de itens)\n");
	printf("[4] - Sair\n");
	printf("[5] - Limpar tela\n");
}

int main() {
	int qtd_items = 5;
	int numero_do_item = 0;
	struct item *items = (struct item*)malloc(qtd_items * sizeof(struct item));
	// struct item items[qtd_items];
	
	int sair = 0;
	
	int index_para_adicionar = 0;
	
	while(sair == 0) {
		mostrar_lista();
		int opcao = 0;
		
		printf("Digite sua opcao: ");
		scanf("%d", &opcao);
		
		if(opcao == 1) {
			char nome[100];
			float valor_unitario = 0;
			int quantidade = 0;

			printf("Digite o nome do item: ");
			fflush(stdin);
			fgets(nome, sizeof(nome), stdin);
			nome[strcspn(nome, "\n")] = '\0';

			printf("Digite o valor unitario do item: ");
			scanf("%f", &valor_unitario);

			printf("Digite a quantidade do item: ");
			scanf("%d", &quantidade);
			
			strcpy(items[index_para_adicionar].nome, nome);
			items[index_para_adicionar].valor_unitario = valor_unitario;
			items[index_para_adicionar].quantidade = quantidade;
			
			index_para_adicionar++;
		}
		
		else if(opcao == 2) {
			float valor_total = 0;
			
			for(int i = 0; i < qtd_items; i++) {
				if(items[i].quantidade != 0) {
					valor_total += items[i].valor_unitario * items[i].quantidade;
				}
			}
			
			printf("Valor total da compra: %f", valor_total);
		}
		
		else if(opcao == 3) {
			printf("\nRelatorio dos itens\n");
			for(int i = 0; i < index_para_adicionar; i++) {
				if(items[i].quantidade != 0 || items[i].valor_unitario != 0) {
					printf("Nome: %s, Valor: %f, Quantidade: %d\n",
					items[i].nome, items[i].valor_unitario, items[i].quantidade);
				}
			}
		}
		
		else if(opcao == 4) {
			sair = 1;
		}
		
		else if(opcao == 5) {
			system("cls");
		}
		
		else {
			printf("Opcao invalida\n");
			return 0;
		}
		
		if (numero_do_item >= qtd_items) {
			qtd_items++;
			items = realloc(items, qtd_items * sizeof(struct item));
		}
		
		opcao = 0;
		numero_do_item++;
	}
	
	free(items);
	return 0;
}
