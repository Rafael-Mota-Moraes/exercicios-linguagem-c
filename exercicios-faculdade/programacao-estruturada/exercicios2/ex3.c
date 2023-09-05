/*
Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Após mostre os valores lidos na ordem inversa.
*/

#include <stdio.h>

int main() {
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};


    int maior = 0;

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    for(int i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

