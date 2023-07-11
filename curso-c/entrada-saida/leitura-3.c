#include <stdio.h>

int main() {
    FILE *arq;
    
    int num, resultado, soma = 0;

    arq = fopen("arquivo.txt", "r");

    if(arq) {

        while(!feof(arq)) {
            resultado = fscanf(arq, "%d", &num);
            if(resultado == 1) {
                soma += num;
            }
        }

    } else {
        printf("Não achou o arquivo.");
    }

    printf("A soma é: %d\n", soma);
    fclose(arq);

    return 0;
}
