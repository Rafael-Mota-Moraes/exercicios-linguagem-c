/*
    Leia uma distância em kilometros convertidas em milhas
*/

#include <stdio.h>

int main() {
    double K, M;

    printf("Digite uma distância em KM: ");
    scanf("%lf", &K);

    M = K / 1.61;

    printf("A distância em milhas é: %lf", M);

    return 0;
}