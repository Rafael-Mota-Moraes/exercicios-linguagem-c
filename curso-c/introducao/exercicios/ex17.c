/*
    Leia o valor de um comprimento em polegadas e apresente-o convertido em centimetros
*/

#include <stdio.h>

int main() {
    double C, P;

    printf("Digite o comprimento em centimetros: ");
    scanf("%lf", &C);

    P = C / 2.54;

    printf("O valor convertido para polegadas é: %lf", P);

    return 0;
}
