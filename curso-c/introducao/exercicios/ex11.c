/*
    converta uma velocidade de metros por segundo para Km/h
*/

#include <stdio.h>

int main() {
    double km, m;

    printf("Digite a velocidade (KM/h): ");
    scanf("%lf", &m);

    km = m * 3.6;

    printf("A velocidade convertida é: %lf", km);

    return 0;
}

