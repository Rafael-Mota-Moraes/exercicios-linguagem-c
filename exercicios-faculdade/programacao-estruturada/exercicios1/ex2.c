/*
Fazer um programa em “C” para calcular o IMC (Índice de Massa Corporal), que é calculado
dividindo o peso (em kg) pela altura ao quadrado (em metros).
*/

#include <stdio.h>

int main()
{
    double imc, altura_em_centimetros, peso;

    printf("Digite o seu peso: ");
    scanf("%lf", &peso);

    printf("Digite a sua altura (cm): ");
    scanf("%lf", &altura_em_centimetros);

    imc = peso / (altura_em_centimetros * altura_em_centimetros);

    printf("Seu IMC é: %.2lf\n", imc);

    return 0;
}
