/*
Faça um programa que leio o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pao ao funcionário, adicionando 10% sobre o valor calculado.
*/

#include <stdio.h>

int main() {
    double valor_hora, horas_trabalhadas, salario_total;

    printf("Digite o valor da sua hora: ");
    scanf("%lf", &valor_hora);

    printf("Digite a qtd de horas trabalhadas: ");
    scanf("%lf", &horas_trabalhadas);

    salario_total = (valor_hora * horas_trabalhadas) * 1.1;

    printf("O salário final é: %lf", salario_total);

    return 0;
}
