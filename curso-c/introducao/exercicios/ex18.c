/*
converta um valor de metros cúbicos para litros
*/

#include <stdio.h>

int main() {
    double metros_cubicos, litros;

    printf("Digite o volume: ");
    scanf("%lf", &metros_cubicos);

    litros = 1000 * metros_cubicos;

    printf("O valor convertido é: %lf", litros);

    return 0;
}