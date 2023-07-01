/*
Exercício 12:
▪ Declare uma matriz de inteiros de tamanho 6 por 6.
▪ Preencha a matriz com valores aleatórios.
▪ Escreva na tela todos elementos localizados acima da diagonal
principal.
▪ Escreva na tela todos elementos localizados abaixo da diagonal
principal.

Na matriz ao lado, a diagonal principal
está marcada com a cor vermelha.

Neste caso, a saída do algoritmo deverá
ser:
2, 3, 4, 5, 6, 9, 10, 11, 12, 16, 17, 18, 23, 24, 30
7, 13, 14, 19, 20, 21, 25, 26, 27, 28, 31, 32, 33, 34, 35
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int matriz[6][6];
	srand(time(NULL));
	
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 6; j++) {
			matriz[i][j] = rand() % 100;
		}
	}
	
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 6; j++) {
			printf("%.2d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	
	printf("Elementos acima da diagonal da matriz\n");
	
	for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

	printf("Elementos abaixo da diagonal da matriz\n");
	
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < i; j++) {
			printf("%.2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

