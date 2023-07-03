#include <stdio.h>

/*
    Faça um programa que leia um número real e o imprima
*/

int main() {
    double numero;

    printf("Digite um número inteiro: ");
    scanf("%lf", &numero);

    printf("O número digitado foi %f", numero);

    return 0;
}