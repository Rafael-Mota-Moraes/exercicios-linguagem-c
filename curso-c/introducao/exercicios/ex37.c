/*
faça um programa que leia o valor de um produto e o imprima com desconto de 12%
*/

#include <stdio.h>

int main() {
    double preco, preco_com_desconto;

    printf("Digite o preco do produto: ");
    scanf("%lf", &preco);

    preco_com_desconto = preco * 0.88;

    printf("Preco com desconto: %lf", preco_com_desconto);
    return 0;
}
