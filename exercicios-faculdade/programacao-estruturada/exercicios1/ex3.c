/*
Leia um número inteiro e escreva se ele é par ou ímpar.
*/

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Número é par\n");
        return 0;
    }

    printf("Número é impar\n");

    return 0;
}
