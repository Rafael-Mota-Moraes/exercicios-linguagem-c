/*
    Leia um valor de comprimento em jardas é o apresente convertido em metros
*/

#include <stdio.h>

int main() {
    double M, J;

    printf("Digite a distância em jardas: ");
    scanf("%lf", &J);

    M = 0.91 * J;

    printf("A distância convertida em metros é: %lf", M);

    return 0;
}