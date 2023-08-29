/*
Faça um programa em C que receba 2 valores. O programa deve fazer o seguinte:
• Caso o primeiro valor seja par mostre a sequência do primeiro até o segundo valor
(somente números pares);
• Caso o primeiro valor seja impar mostre a sequência do primeiro até o segundo valor
(somente números impares).
*/

#include <stdio.h>

int main()
{
    int v1, v2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);

    printf("Digite o segundo valor: ");
    scanf("%d", &v2);

    if (v1 % 2 == 0)
    {
        for (int i = v1; i <= v2; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        for (int i = v1; i <= v2; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
