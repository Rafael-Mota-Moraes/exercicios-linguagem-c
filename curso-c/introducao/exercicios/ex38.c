/*
leia o valor de um salário e imprima esse salário com aumento de 25%
*/

#include <stdio.h>

int main() {
    double salario, salario_com_aumento;

    printf("Digite o salário: ");
    scanf("%lf", &salario);

    salario_com_aumento = salario * 1.25;

    printf("Salário com aumento: %lf", salario_com_aumento);

    return 0;
}

