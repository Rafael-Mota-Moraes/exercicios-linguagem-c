/*
Escreva um programa em C Verifique se o valor é palíndromo. Um número é
palíndromo (ou capicua) é aquele que é igual quando lido nos dois
sentidos.
Palíndromo: 3113
Não palíndromo: 4115
*/

#include <stdio.h>

int main()
{
    int num, reversedNum = 0, originalNum, remainder;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
    {
        printf("%d é um número palíndromo.\n", originalNum);
    }
    else
    {
        printf("%d não é um número palíndromo.\n", originalNum);
    }

    return 0;
}
