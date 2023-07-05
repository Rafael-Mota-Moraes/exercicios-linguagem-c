/*
    leia um valor em real e o converta para dólar
*/

#include <stdio.h>

int main() {
    double real;

    printf("Digite o valor: R$ ");
    scanf("%lf", &real);

    double dolar = real * 4.8;

    printf("Convertido fica: %2lf", dolar);

    return 0;
}