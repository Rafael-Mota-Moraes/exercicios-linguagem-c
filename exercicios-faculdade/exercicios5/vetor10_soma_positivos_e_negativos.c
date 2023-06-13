/*
Exercício 2: Crie um algoritmo que declare um vetor de inteiros de 10
posições, preencha todas as posições com valores lidos e que escreva
na tela a soma de todos valores positivos e a soma de todos valores
negativos.
*/

#include <stdio.h>

int main() {
	int numeros[10];

	int soma_positivos = 0;
	int soma_negativos = 0;

	for(int i = 0; i < 10; i++) {
		int numero_atual;
		
		printf("Digite um numero: ");
		scanf("%d", &numero_atual);
		numeros[i] = numero_atual;
		
		if(numero_atual >= 0) {
			soma_positivos += numero_atual;
		} else {
			soma_negativos += numero_atual;
		}
	}
	
	printf("A soma dos numeros positivos eh: %d \n", soma_positivos);
	printf("A soma dos numeros negativos eh: %d", soma_negativos);

	return 0;
}
