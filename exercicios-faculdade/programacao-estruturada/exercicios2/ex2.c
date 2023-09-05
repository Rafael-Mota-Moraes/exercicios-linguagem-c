/*
Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Após mostre o maior elemento e a sua posição no vetor.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10];

    srand(time(NULL));

    int maior = 0;

    for (int i = 0; i < 10; i++) {
        vetor[i] = rand() % 100; 
    }

    printf("Vetor:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d) %d ", i, vetor[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    int posicao = 0;

    for(int i = 0; i < 10; i++) {
        if(vetor[i] == maior) {
            break;
        }

        posicao++;
    }

    printf("\nMaior: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}

