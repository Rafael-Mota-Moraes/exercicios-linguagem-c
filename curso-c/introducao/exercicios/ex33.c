/*
Leia o tamanho de um lado de um quadrado e imprima o valor de sua área
*/

#include <stdio.h>

int main() {
    double tamanho_lado, area;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &tamanho_lado);

    area = tamanho_lado * tamanho_lado;

    printf("A área é: %lf", area);

    return 0;
}

