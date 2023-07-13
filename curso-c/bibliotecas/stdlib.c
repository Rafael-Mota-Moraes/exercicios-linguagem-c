#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
atof() // converte uma string para double
atoi() // converte uma string para inteiro
atol() // converte string para double longo

GERAÇÃO DE SEQUÊNCIAS PSEUDO-ALEATÓRIAS
rand(); // gera número aleatório
srand(); // inicializa o gerador de números aleatórios

GERENCIAMENTO DE MEMÓRIA DINÂMICA

malloc();
calloc();
free();
realoc();

PESQUISA E ORDENAÇÃO
qsort(); // ordena os elementos de um array

ARITMÉTICA DE INTEIROS

abs(); // valor absoluto

div(); // divisão inteira

*/

int compara(int *x, int *y) {
    if(*x > *y) {
        return 1;
    } else if(*x == *y) {
        return 0;
    } else {
        return -1;
    }
}

int main() {
    char valor_s[5];
    double valor_d;

    strcpy(valor_s, "4.5");

    valor_d = atof(valor_s);
    printf("O valor é %.2f\n", (valor_d + valor_d));

    // NÚMEROS ALEATÓRIOS
    // inicializar o gerador

    srand(time(NULL));

    for(int i = 0; i < 6; i++) {
        printf("%d\n", rand() % 60);
    }

    printf("\n\n");

    // ORDENANDO UM ARRAY

    int numeros[] = {6, 2, 9, 3, 7, 1, 5};

    qsort(numeros, 7, sizeof(int), (void *)compara);

    for(int i = 0; i < 7; i++) {
        printf("%d\n", numeros[i]);
    }

    printf("\n\n");

    // ARITMÉTICA DE INTEIROS

    int valor_a, valor_b;

    valor_a = abs(5);
    printf("O valor absoluto de 5 é %d\n", valor_a);

    valor_b = abs(-10);
    printf("O valor absoluto de -10 é %d\n", valor_b);

    div_t saida;

    saida = div(27, 4); // 27 / 4

    printf("O quociente de 27 / 4 é: %d\n", saida.quot);
    printf("O resto de 27 / 4 é: %d\n", saida.rem);

    return 0;
}
