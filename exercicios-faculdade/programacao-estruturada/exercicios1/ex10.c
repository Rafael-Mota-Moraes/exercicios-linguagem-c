/*
Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus
divisores positivos diferentes de n. Construa um programa em C que verifica se um dado
número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.
*/

#include <stdio.h>

int main()
{
    int numero;
    int somaDivisores = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            somaDivisores += i;
        }
    }

    if (somaDivisores == numero)
    {
        printf("%d é um número perfeito!\n", numero);
    }
    else
    {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}
