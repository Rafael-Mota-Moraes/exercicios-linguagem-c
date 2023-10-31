/*
Faça um programa que receba e imprima um vetor com o seu nome (nome completo)
e o total de letras que ele possui.
*/
#include <stdio.h>
#include <string.h>

int main() {
	
	char nome[100];
	
	printf("Digite seu nome: ");
	fgets(nome, 100, stdin);
	
	int tamanho_nome = strlen(nome);
	
	printf("Seu nome eh: %s, ele tem %d letras", nome, tamanho_nome);
}
