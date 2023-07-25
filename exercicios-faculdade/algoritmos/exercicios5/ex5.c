/*
Exercício 5: Declare um vetor de inteiros e preencha com números
aleatórios na faixa de 1-20. Leia um número N do teclado (na faixa de
2-40) e escreva na tela duas posições do vetor que quando somadas
resultam em N. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int aleatorios[10];
    int i;

    // Inicializa o gerador de números aleatórios com uma semente única
    srand(time(NULL));

    // Preenche o vetor com inteiros aleatórios
    for (i = 0; i < 10; i++) {
        aleatorios[i] = rand() % 20 + 1;
    }

    
	int num_teclado;
	
	printf("Digite um numero entre 2 e 40: ");
	scanf("%d", &num_teclado);
	
	if(num_teclado < 2 || num_teclado > 40) {
		printf("Numero deve estar entre 2 e 40");
	}
	
	for(int i = 0; i < 10; i++) {
		int num_atual = aleatorios[i];
		int resto = num_teclado - num_atual;
		
		for(int j = 0; j < 10; j++){
			if(resto == aleatorios[j]) {
				printf("Posicao: %d, Numero: %d\n", j, resto);
				printf("Posicao: %d, Numero: %d\n", i, num_atual);
				return 0;
			}
		}
		
	}
	
	
	return 0;
}

