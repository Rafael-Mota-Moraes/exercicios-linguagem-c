/*
    converta uma distância em milhas para kilometros
*/

#include <stdio.h>

int main() {
    double K, M;

    printf("Digite uma distância em milhas: ");
    scanf("%lf", &M);

    K = 1.61 * M;

    printf("A distância em kilometros é: %lf", K);

    return 0;
}
