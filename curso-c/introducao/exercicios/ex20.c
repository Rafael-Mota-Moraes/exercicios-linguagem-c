/*
leia um valor de massa em kilogramas e apresente-o convertido em libras
*/

#include <stdio.h>

int main() {
    double L, K;

    printf("Digite a massa: ");
    scanf("%lf", &K);

    L = K / 0.45;

    printf("Convertido: %lf", L);

    return 0;
}

