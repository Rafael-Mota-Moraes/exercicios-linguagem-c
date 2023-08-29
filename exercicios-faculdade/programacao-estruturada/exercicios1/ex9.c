/*
Faça um programa em C que receba um número inteiro e positivo, e diga se esse número é
primo ou não. Obs: Um número é primo somente quando for divisível por 1 e por ele mesmo.
*/

#include <stdio.h>

int e_primo(int numero)
{
    if (numero <= 1)
    {
        return 0; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++)
    {
        if (numero % i == 0)
        {
            return 0; // Se for divisível por algum número, não é primo
        }
    }

    return 1; // Se não foi divisível por nenhum número, é primo
}

int main()
{
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (e_primo(numero) == 1)
    {
        printf("Número é primo!");
    }
    else
    {
        printf("Não é primo");
    }

    return 0;
}
