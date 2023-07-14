#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd, *p;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)malloc(qtd * sizeof(int));

    for(int i = 0; i < qtd; i++) {
        printf("Informe o valor para a posição %d do vetor: ", (i + 1));
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < qtd; i++) {
        printf("No vetor 'numeros[%d]' está o valor: %d\n", i, p[i]);
    }

    qtd = qtd * sizeof(int);

    printf("A variável 'p' ocupa %d bytes em memória\n", qtd);

    // liberar a memória
    free(p);
    p = NULL; // medida de segurança

    return 0;
}
