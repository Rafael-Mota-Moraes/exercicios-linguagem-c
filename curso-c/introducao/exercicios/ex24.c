/*
    Leia um valor de uma área em metros quadrados e a apresente convertida para acres
*/

#include <stdio.h>

int main() {
    double A, M;

    printf("Digite a área em m²: ");
    scanf("%lf", &M);

    A = M * 0.000247;

    printf("A área convertida em acres é: %lf", A);

    return 0;
}