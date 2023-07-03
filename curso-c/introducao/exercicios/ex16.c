/*
    Leia o valor de um comprimento em polegadas e apresente-o convertido em centimetros
*/

#include <stdio.h>

int main() {
    double C, P;

    printf("Digite o comprimento em polegadas: ");
    scanf("%lf", &P);

    C = P * 2.54;

    printf("O valor convertido para centimetros é: %lf", C);

    return 0;
}
