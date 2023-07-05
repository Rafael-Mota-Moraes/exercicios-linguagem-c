/*
    Leia um valor de comprimento em metros e o apresente convertido em jardas
*/

#include <stdio.h>

int main() {
    double M, J;

    printf("Digite a distância em metros: ");
    scanf("%lf", &M);

    J = M / 0.91;

    printf("A distância convertida em jardas é: %lf", J);

    return 0;
}