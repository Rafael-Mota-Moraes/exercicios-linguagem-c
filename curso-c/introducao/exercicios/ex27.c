/*
    Leia um valor de uma área em hectares e a apresente convertida para  metros quadrados 
*/

#include <stdio.h>

int main() {
    double H, M;

    printf("Digite uma área em hectares: ");
    scanf("%lf", &H);

    M = H * 10000;

    printf("A área convertida para metros é: %lf", M);

    return 0;
}