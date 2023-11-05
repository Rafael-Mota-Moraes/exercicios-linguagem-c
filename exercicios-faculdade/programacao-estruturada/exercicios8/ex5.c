/*
Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Rafael";
    char str2[50];

    int tamanho = strlen(str1);

    for (int i = 0; i < tamanho; i++)
    {
        str2[i] = str1[i] + 1;
    }

    str2[tamanho] = '\0';

    puts(str2);

    return 0;
}