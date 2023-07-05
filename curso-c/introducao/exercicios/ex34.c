/*
Leia o valor de um raio e imprima a área de um círculo
*/

#include <stdio.h>

#define PI 3.14

int main() {
    double raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("Área do círculo: %lf", area);

    return 0;
}
