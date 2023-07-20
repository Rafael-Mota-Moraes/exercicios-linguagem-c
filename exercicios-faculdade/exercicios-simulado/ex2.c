/*
Questão 2 Na matemática, o fatorial de um número inteiro positivo n, representado por n!,  é o produto de todos inteiros positivos de 1 até n. Observe o exemplo abaixo do cálculo do  fatorial de 5: 
5! = 1 × 2 × 3 × 4 × 5 = 120 
Desenvolva um algoritmo que leia um número inteiro n maior ou igual a zero e exiba na tela  o fatorial de n. Considere que 0! é igual a 1. O algoritmo deve tratar entradas inválidas  exibindo uma mensagem de erro e solicitando um novo número imediatamente. 
*/

#include <stdio.h>

void fatorial(int numero) {
    int acumulador = 1;

    for(int i = numero; i > 0; i--) {
        acumulador *= i;
    }

    printf("O fatorial de %d é %d ", numero, acumulador);
}

int main() {
    fatorial(5);

    return 0;
}

