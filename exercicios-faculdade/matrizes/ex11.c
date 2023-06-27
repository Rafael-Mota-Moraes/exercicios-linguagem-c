/*
Declare uma matriz de inteiros de 5 linhas e 10 colunas.
Preencha a matriz com valores aleatórios. Escreva na tela a matriz
transposta.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int matriz[5][10];
	srand(time(NULL));
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 10; j++) {
			matriz[i][j] = rand() % 100;
		}
	}
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 10; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%d ", matriz[j][i]);
		}
		printf("\n");
	}

	
	
	return 0;
}

