/*
PALAVRA INVERSA

Faça um algoritmo que leia uma palavra de no máximo 15 caracteres e
que escreva na tela a palavra inversa, ou seja, como se fosse lida da
direita para a esquerda.
*/

#include <stdio.h>

int main() {
	char string[15];
	
	printf("Digite sua string: ");
	scanf("%s", string);
	
	for(int i = 14; i >= 0; i--) {
		printf("%c", string[i]);
	}
	
	return 0;
}
