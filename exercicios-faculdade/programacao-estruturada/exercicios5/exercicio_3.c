/*
Escreva uma função que receba como parâmetro um vetor de inteiros com n valores, e determina o maior elemento do vetor e o número de vezes que este elemento ocorreu no vetor. Por exemplo, para um vetor com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.
*/

#include <stdio.h>

void ve_maior(int numeros[]) {
    int maior = 0;
    for(int i = 0; i < 10; i++) {
        if(maior < numeros[i]) {
            maior = numeros[i];
        }
    }

    printf("Maior: %d\n", maior);

    int qtd_vezes = 0;
    for(int i = 0; i < 10; i++) {
        if(maior == numeros[i]) {
            qtd_vezes++;
        }
    }


    printf("Qtd vezes: %d\n", qtd_vezes);

}

int main() {
    int numeros[10] = {1,2,3,4,4,5,6,10,10,22, 22};

    ve_maior(numeros);

    return 0;
}

