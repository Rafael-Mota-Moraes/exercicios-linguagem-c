/*
 Exercício 7: Declare dois vetores de inteiros e preencha ambos com
números que obedeçam a uma ordem crescente. Escreva na tela todos os
elementos de ambos os vetores em uma única sequência, também em
ordem. 
*/

#include <stdio.h>

int main() {
	int numeros_1[5] = {1, 5, 7, 10, 16};
	int numeros_2[5] = {3, 4, 9, 13, 18};
	
	int i = 0;
	
	while(i < 5) {
		if(numeros_1[i] > numeros_2[i]) {
			printf("%d\n", numeros_2[i]);
			printf("%d\n", numeros_1[i]);
		}else{
			printf("%d\n", numeros_1[i]);
			printf("%d\n", numeros_2[i]);
		}

		i++;
	}
	
	return 0;
}
