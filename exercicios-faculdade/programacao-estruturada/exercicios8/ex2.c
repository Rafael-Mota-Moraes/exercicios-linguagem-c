/*
Faça um programa que receba um vetor de caracteres,
gere e imprima um outro vetor onde as vogais, do primeiro vetor,
sejam substituídas pelo caracter *.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checa_se_eh_vogal(char letra)
{
	letra = tolower(letra);
	switch (letra)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return 1;
	default:
		return 0;
	}
}

int main()
{
	srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual

	int tamanho = 10; // Tamanho do vetor de letras
	char letras[tamanho];

	for (int i = 0; i < tamanho; i++)
	{
		letras[i] = 'a' + rand() % 26; // Gere um valor aleatório entre 'a' (97) e 'z' (122)
	}

	char letras_2[tamanho];
	for (int i = 0; i < tamanho; i++)
	{
		letras_2[i] = letras[i];
	}

	for (int i = 0; i < tamanho; i++)
	{
		if (checa_se_eh_vogal(letras_2[i]) == 1)
		{
			letras_2[i] = '*';
		}
	}

	for (int i = 0; i < tamanho; i++)
	{
		printf("%c ", letras_2[i]);
	}

	return 0;
}
