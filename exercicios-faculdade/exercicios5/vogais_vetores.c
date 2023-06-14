/*
Exercício 4: Crie um algoritmo que declare um vetor de caracteres de
10 posições, preencha todas as posições com caracteres lidos e que
escreva na tela todas as vogais (minúsculas e maiúsculas) armazenadas
e suas respectivas posições no vetor.
*/

#include <stdio.h>

int main() {
	char letras[10];
	
	char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

	printf("Digite 10 caracteres: \n");
	
	for(int i = 0; i < 10; i++) {
		scanf(" %c", &letras[i]);
	}
	
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			if(letras[i] == vogais[j]) {
				printf("Vogal: %c\n", letras[i]);
			}
		}
	}
	
	return 0;
}

