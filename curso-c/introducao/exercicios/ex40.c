/*
Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
*/

#include <stdio.h>

int main() {
    int dias_contratados;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias_contratados);

    double valor_sem_desconto = dias_contratados * 30;

    double valor_com_desconto = valor_sem_desconto * 0.92;

    printf("Valor final: %.2lf", valor_com_desconto);

    return 0;
}