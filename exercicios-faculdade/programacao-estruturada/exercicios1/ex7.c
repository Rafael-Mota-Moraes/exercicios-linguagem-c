/*
Leia um número inteiro positivo N e escreva os N primeiros termos da série de Fibonacci (cada
termo é a soma dos dois termos anteriores)(a série é iniciada com os termos 0 e 1).

Ex.: (os 10 primeiros termos) 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
*/

#include <stdio.h>

void fibonnaci(int valor)
{
    int valores[valor];
    valores[0] = 0;
    valores[1] = 1;

    for (int i = 2; i < valor; i++)
    {
        valores[i] = valores[i - 1] + valores[i - 2];
    }

    for (int i = 0; i < valor; i++)
    {
        printf("%d ", valores[i]);
    }
}

int main()
{
    int valor;
    printf("Digite um número: ");
    scanf("%d", &valor);

    fibonnaci(valor);

    return 0;
}
