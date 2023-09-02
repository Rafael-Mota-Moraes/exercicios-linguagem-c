 /*
 Escreva um programa que lê o tamanho do lado de um
quadrado e imprime um quadrado daquele tamanho com
asteriscos e espaços em branco. Seu programa deve
funcionar para quadrados com lados de todos os 
tamanhos entre 1 e 20.
Para lado igual a 5:
*****
*   *
*   *
*   *
*****
 */

#include <stdio.h>

int main() {
	int tamanho;
	
	printf("Digite o tamanho que deseja para o quadrado: ");
	scanf("%d", &tamanho);
	
	if(tamanho > 0 && tamanho <= 20) {
		for(int i = 0; i < tamanho; i++) {
			for(int j = 0; j < tamanho; j++) {
				if(i == 0 || i == tamanho - 1) {
					printf("*");
				} else {
					if(j == 0 || j == tamanho - 1) {
						printf("*");
					} else {
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}else{
		printf("Voce digitou um numero invalido.");
	}
	
	
	
	return 0;
}
 