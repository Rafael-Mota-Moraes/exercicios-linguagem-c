/*
    leia uma temperatura em graus celsius e converta para kelvin
*/

#include <stdio.h>

int main() {
    double K, C;

    printf("Digite uma temperatura em celsius: ");
    scanf("%lf", &C);

    K = C + 273.15;

    printf("A temperatura em kelvin é: %lf", K);

    return 0;
}

