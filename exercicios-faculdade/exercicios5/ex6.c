/*
 Exercício 6: Declare um vetor de inteiros e preencha com números que
obedeçam a uma ordem crescente. Leia um número inteiro N. Escreva na
tela a posição deste elemento no vetor caso encontrado, ou então, escreva
a posição na qual este elemento apareceria caso fosse inserido no vetor
ordenado.
*/ 

#include <stdio.h>

int main() {
	int numeros[10] = {1, 5, 7, 10, 16, 20, 28, 30, 46, 50};
	
	int num_usuario;
	printf("Digite um número inteiro: ");
	scanf("%d", &num_usuario);
	
	for(int i = 0; i < 10; i++) {
		if(num_usuario == numeros[i]) {
			printf("Numero esta no vetor na posicao: %d", i);
		}
		
		if(num_usuario >= numeros[i] && num_usuario <= numeros[i + 1]) {
			int posicao = i + 1;
			printf("O numero estaria na posicao: %d", posicao);
		}
	}
	
	return 0;
}


