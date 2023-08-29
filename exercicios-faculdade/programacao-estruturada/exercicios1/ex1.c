/*
Fazer um programa em “C” que pergunta um valor em metros e imprime o correspondente em
decímetros, centímetros e milímetros.
*/

#include <stdio.h>

int main()
{
    double valor_metros;

    printf("Digite o valor em metros: ");
    scanf("%lf", &valor_metros);
    double decimetros, centimetros, milimetros;

    decimetros = valor_metros * 10;
    centimetros = valor_metros * 100;
    milimetros = valor_metros * 1000;

    printf("Valor decimetros: %.2lf\n", decimetros);
    printf("Valor centimetros: %.2lf\n", centimetros);
    printf("Valor milimetros: %.2lf\n", milimetros);

    return 0;
}
