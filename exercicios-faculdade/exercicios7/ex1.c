/*
TAMANHO DE UMA STRING

O caractere nulo '\0' indica o final de uma string armazenada dentro
de um vetor do tipo char.

Faça um algoritmo que leia uma palavra de no máximo 15 caracteres e
que escreva na tela o tamanho da palavra digitada.
*/

#include <stdio.h>

int main() {
	char string[15];
	
	printf("Digite sua palavra: ");
	scanf("%s", string);

	int tamanho = 0;
	for(int i = 0; i < 15; i++) {
		if(string[i] == '\0') {
			break;
		}
	
		printf("%c", string[i]);
		tamanho++;
	}
	
	printf("Tamanho da string: %d", tamanho);
		
	return 0;
}
