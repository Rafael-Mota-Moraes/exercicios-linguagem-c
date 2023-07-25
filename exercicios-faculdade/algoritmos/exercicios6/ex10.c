/*
Declare uma matriz de inteiros de tamanho 5 por 5.
Preencha a matriz com valores aleatórios. Escreva na tela a soma dos
valores de cada uma das 5 linhas e de cada uma das 5 colunas.
*/ 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int matriz[5][5];
	srand(time(NULL));
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			matriz[i][j] = rand() % 100;
		}
	}
	
	
	for(int i = 0; i < 5; i++) {
		int acumulador = 0;
		for(int j = 0; j < 5; j++) {
			acumulador += matriz[i][j];
		}
		printf("Soma dos números da linha %d eh %d.\n", i, acumulador);
		acumulador = 0;
	}
	
	for(int i = 0; i < 5; i++) {
		int acumulador = 0;
		
		for(int j = 0; j < 5; j++) {
			acumulador += matriz[j][i];
			if(j == 4) {
				printf("Soma dos números da coluna %d eh %d.\n", i, acumulador);
			}
		}
		

		
		acumulador = 0;
	}
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			printf("%d ", matriz[i][j]);
			if(j == 4) {
				printf("\n");
			}
		}
	}
		
	
	return 0;
}


