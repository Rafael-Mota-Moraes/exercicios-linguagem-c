/*
Questão 1 Na matemática, a Sequência de Fibonacci é uma sequência de números  inteiros em que os dois primeiros números são 0 e 1. A partir do terceiro número, cada  elemento subsequente é obtido pela soma dos dois números anteriores. Observe abaixo o  exemplo dos dez primeiros números Fibonacci: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34 
Desenvolva um algoritmo que gere a Sequência de Fibonacci até o seu n-ésimo número.  Esse algoritmo deve permitir que o usuário insira um número inteiro n maior que zero. Em  seguida, o algoritmo deve escrever os primeiros n números da sequência de Fibonacci como  resultado. O algoritmo deve tratar entradas inválidas exibindo uma mensagem de erro e  solicitando um novo número imediatamente. 
*/

#include <stdio.h>

void fibonacci(int numero) {
    int fib_vetor[numero];

    fib_vetor[0] = 0;
    fib_vetor[1] = 1;

    for(int i = 2; i <= numero; i++) {
        fib_vetor[i] = fib_vetor[i - 1] + fib_vetor[i - 2];
    }

    for(int i = 0; i < numero; i++) {
        printf("%d ", fib_vetor[i]);
    }
}


int main() {
    fibonacci(10);
}
