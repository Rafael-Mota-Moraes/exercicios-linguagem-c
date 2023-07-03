/*
    leia uma temperatura em graus kelvin e converta para celsius
*/

#include <stdio.h>

int main() {
    double K, C;

    printf("Digite uma temperatura em Kelvin: ");
    scanf("%lf", &K);

    C = K - 273.15;

    printf("A temperatura em celsius é: %lf", C);

    return 0;
}

