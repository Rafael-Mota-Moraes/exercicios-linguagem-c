/*
    Leia um valor de uma área em metros quadrados e a apresente convertida para hectares
*/

#include <stdio.h>

int main() {
    double H, M;

    printf("Digite uma área em m²: ");
    scanf("%lf", &M);

    H = M * 0.0001;

    printf("A área convertida para hectares é: %lf", H);

    return 0;
}