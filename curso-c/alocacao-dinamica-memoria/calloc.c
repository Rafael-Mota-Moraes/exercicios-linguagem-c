#include <stdio.h>
#include <stdlib.h>

// Calloc
/*
qtd 3;
Malloc
[3][1][4]

Calloc

*/

int main() {
    int qtd, *p;

    printf("Informe a quantidade de elementos para o vetor: ");
    scanf("%d", &qtd);

    p = (int*)calloc(qtd, sizeof(int));

    if(p){
        for(int i = 0; i < qtd; i++) {
            printf("Informe o valor para a posição %d do vetor: ", (i + 1));
            scanf("%d", &p[i]);
        }

        for(int i = 0; i < qtd; i++) {
            printf("No vetor 'numeros[%d]' está o valor: %d\n", i, p[i]);
        }
    } else {
        printf("Erro memória insuficiente\n");
    }



    qtd = qtd * sizeof(int);

    printf("A variável 'p' ocupa %d bytes em memória\n", qtd);

    // liberar a memória
    free(p);
    p = NULL; // medida de segurança

    return 0;
}
