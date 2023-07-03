/*
    Leia um ângulo em graus e apresente-o convertido em radianos
*/

#include <stdio.h>

#define PI 3.14

int main() {
    double angulo_radianos, angulo_graus;

    printf("Digite um ângulo: ");
    scanf("%lf", &angulo_radianos);

    angulo_graus = angulo_radianos * 180 / PI;

    printf("Angulo convertido: %lf", angulo_graus);

    return 0;
}
