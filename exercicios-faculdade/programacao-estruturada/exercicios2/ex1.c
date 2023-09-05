/*
Faça um programa que receba um vetor com 10 posições. Em seguida mostre o maior e o menor elemento do vetor.
*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10];

    srand(time(NULL));

    int maior = 0;
    int menor = INT_MAX;

    for (int i = 0; i < 10; i++) {
        vetor[i] = rand() % 100; 
    }

    printf("Vetor:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }

        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("\nMaior: %d\nMenor: %d\n", maior, menor);

    return 0;
}
