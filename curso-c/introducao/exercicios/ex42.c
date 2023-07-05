/*
Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabedo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.
*/

#include <stdio.h>

int main() {
    double salario_base, salario_final;

    printf("Digite o salário base do funcionário: ");
    scanf("%lf", &salario_base);

    salario_final = salario_base + (salario_base * 0.05) - (salario_base * 0.07);

    printf("Salário final: %lf", salario_final);

    return 0;
}
