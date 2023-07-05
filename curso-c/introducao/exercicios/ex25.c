/*
    Leia um valor de uma área em acres e a apresente convertida para metros quadrados
*/

#include <stdio.h>

int main() {
    double A, M;

    printf("Digite a área em acres: ");
    scanf("%lf", &A);

    M = A * 4048.58;

    printf("A área convertida em m² é: %lf", M);

    return 0;
}