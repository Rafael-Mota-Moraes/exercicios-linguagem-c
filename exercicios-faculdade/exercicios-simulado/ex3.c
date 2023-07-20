/*
Questão 3 Desenvolva um algoritmo que escreva na tela todos números pares de 0 até  um número digitado pelo usuário. A escrita na tela deverá ser feita da seguinte forma:  5 números separados por tabulação (\t) e ao final uma nova linha (\n). 
Por exemplo, se o usuário digitar o número 22, o algoritmo deverá escrever: 
0 2 4 6 8 
10 12 14 16 18 
20 22
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Digite o número: ");
    scanf("%d", &numero);

    int quebra_linha = 0;
    for(int i = 0; i <= numero; i++) {

        if(i % 2 == 0) {
            printf("%d\t", i);
            quebra_linha++;
        }    

        if(quebra_linha == 5) {
            printf("\n");
            quebra_linha = 0;
        }
    }

    return 0;
}