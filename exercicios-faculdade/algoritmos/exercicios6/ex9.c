/*
Declare uma matriz de inteiros de 10 linhas e 5 colunas.
Preencha a matriz com valores aleatórios. Encontre o maior elemento
em uma matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int matriz[10][5];
	srand(time(NULL));
	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 5; j++) {
			matriz[i][j] = rand() % 100;
		}
	}
	
	int atual = 0;

	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 5; j++) {
			if(matriz[i][j] >= atual) {
				atual = matriz[i][j];
			}
		}
	}
	
	printf("O maior número da matriz é: %d", atual);
	
	return 0;
}

