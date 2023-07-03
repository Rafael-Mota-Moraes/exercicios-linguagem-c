/*
    leia uma temperatura em graus fahrenheit e converta para fahrenheit celsius
*/

#include <stdio.h>

int main() {
    double C, F;

    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%lf", &F);

    C = 5.0 * (F - 32.0) / 9.0;

    printf("A temperatura corrigida é: %lf", C);

    return 0;
}
