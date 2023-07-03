/*
    Leia um ângulo em radianos e apresente-o convertido em graus
*/

#include <stdio.h>

#define PI 3.14

int main() {
    double angulo_radianos, angulo_graus;

    printf("Digite um ângulo: ");
    scanf("%lf", &angulo_graus);

    angulo_radianos = angulo_graus * PI / 180;

    printf("Angulo convertido: %lf", angulo_radianos);

    return 0;
}
