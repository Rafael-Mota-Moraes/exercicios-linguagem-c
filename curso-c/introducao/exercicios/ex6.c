/*
    leia uma temperatura em graus celsius e converta para fahrenheit
*/

#include <stdio.h>

int main() {
    double C, F;

    printf("Digite uma temperatura em celsius: ");
    scanf("%lf", &C);

    F = C * (9.0 / 5.0) + 32.0;

    printf("A temperatura corrigida é: %lf", F);

    return 0;
}
