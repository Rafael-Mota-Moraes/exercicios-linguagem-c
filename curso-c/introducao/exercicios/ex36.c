/*
Leia a altura e o raio de um cilindro e imprima o volume do cilindro
*/

#include <stdio.h>

int main() {
    double altura, raio;

    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    double volume = 3.14 * (raio * raio) * altura;

    printf("Volume do cilindro: %lf", volume);

    return 0;
}
