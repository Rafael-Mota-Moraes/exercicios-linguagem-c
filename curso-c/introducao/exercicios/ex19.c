/*
converta um valor de metros cúbicos para litros
*/

#include <stdio.h>

int main() {
    double metros_cubicos, litros;

    printf("Digite o volume: ");
    scanf("%lf", &litros);

    metros_cubicos = litros / 1000;

    printf("O valor convertido é: %lf", metros_cubicos);

    return 0;
}