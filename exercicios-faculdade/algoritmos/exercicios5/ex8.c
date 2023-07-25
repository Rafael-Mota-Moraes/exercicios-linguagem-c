/*
Exercício 8: Declare um vetor de inteiros e preencha com números
aleatórios. Leia um número do teclado que represente uma posição deste
vetor. Remova o elemento da posição informada e mova para a esquerda
uma posição todos elementos de posições maiores que P.
*/

#include <stdio.h>


int main() {
	int numeros[5] = {1, 5, 7, 10, 16};
	
	int posicao;
	
	printf("Digite a posição: ");
	scanf("%d", &posicao);
	
	numeros[posicao] = -1;
	
	for(int i = 0; i < 5; i++) {
		if(i > posicao) {
			numeros[i - 1] = numeros[i];
		}
	}
	
	for(int i = 0; i < 4; i++) {
		printf("Num: %d\n", numeros[i]);
	}
	

	
	return 0;
}

