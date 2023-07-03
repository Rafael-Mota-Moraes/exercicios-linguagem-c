/*
    converta uma velocidade de Km/h para metros por segundo
*/

#include <stdio.h>

int main() {
    double km, m;

    printf("Digite a velocidade (KM/h): ");
    scanf("%lf", &km);

    m = km / 3.6;

    printf("A velocidade convertida é: %lf", m);

    return 0;
}

