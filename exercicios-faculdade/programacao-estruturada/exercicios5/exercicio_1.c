/*
Escreva uma função que dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função.
*/

#include <stdio.h>
#include <stdlib.h>

void separa(float num, int *x, float *y)
{
    *x = (int)num;
    *y = num - *x;
}
int main()
{
    float num, frac;
    int inteira;

    printf("Digite um número real: ");
    scanf("%f", &num);

    separa(num, &inteira, &frac);

    printf("%i e %f\n", inteira, frac);

    return 0;
}
