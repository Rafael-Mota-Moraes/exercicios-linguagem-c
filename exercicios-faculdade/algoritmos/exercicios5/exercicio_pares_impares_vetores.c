/*
Exercício 3: Crie um algoritmo que declare um vetor de inteiros de 10
posições, preencha todas as posições com valores lidos e em seguida
escreva na tela a quantidade de números pares e ímpares armazenados. 
*/

#include <stdio.h>

int main() {
	int numeros[10];
	
	printf("Digite 10 numeros: ");
	
	for(int i = 0; i < 10; i++) {
		scanf("%d", &numeros[i]);
	}
	
	int qtd_pares = 0;
	int qtd_impares = 0;
	
	for(int i = 0; i < 10; i++) {
		if(numeros[i] % 2 == 0) {
			qtd_pares++;
		}else{
			qtd_impares++;
		}
	}

	printf("Qtd pares: %d\n", qtd_pares);
	printf("Qtd impares: %d\n", qtd_impares);
	
	return 0;
}

