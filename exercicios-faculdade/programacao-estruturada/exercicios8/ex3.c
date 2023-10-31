/*
Faça um programa que receba uma string. Esta deverá ser passada para uma função que
conte a quantidade de letras desta string (simulando a função strlen). Lembre-se que uma string
em C termina com \0.
*/

#include <stdio.h>

int qtd_letras(char *nome) {

	int num = 0;
	while(nome[num] != '\0') {
		num++;
	}
	
	return num;

}

int main() {
	char nome[] = "Rafael Moreira";
	
	printf("Tem %d letras", qtd_letras(nome));
	
}
