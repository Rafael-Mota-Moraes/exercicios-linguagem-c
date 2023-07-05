/*
Faça um programa que receba os valores de a e b e imprima o valor da hipotenusa
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, hipotenusa;
    
    printf("Digite o valor de A e B: ");
    scanf("%lf", &a);
    scanf("%lf", &b);

    double soma_quadrados = a * a + b * b;

    hipotenusa = (soma_quadrados);

    printf("%lf", hipotenusa);

    return 0;
}