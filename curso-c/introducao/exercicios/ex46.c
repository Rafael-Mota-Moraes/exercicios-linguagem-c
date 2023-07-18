/*
Faça um programa que leia um número positivo em três digitos (de 100 a 999).
Gere outro número formado pelos digitos invertidos do número lido,
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char numero[4];
    printf("Número (entre 100 e 999): ");
    scanf("%s", numero);

    int tam;

    tam = strlen(numero);
    
    for (int i = tam - 1; i >= 0; i--)
    {
        printf("%c", numero[i]);
    }

    return 0;
}
