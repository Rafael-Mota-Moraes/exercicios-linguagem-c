/*
	Exercício 1: Crie um algoritmo que declare um vetor de inteiros de 10
	posições, preencha todas as posições com valores lidos e que em
	seguida escreva na tela todos os valores armazenados.
*/

#include <stdio.h>

int main() {
	int numeros[10];

	for(int i = 0; i < 10; i++) {
		int num_atual;
		
		printf("Digite um inteiro: ");
		scanf("%d", &num_atual);
		numeros[i] = num_atual;
	}

	for(int i = 0; i < 10; i++) {
		printf("%d\n", numeros[i]);
	}

	
}
