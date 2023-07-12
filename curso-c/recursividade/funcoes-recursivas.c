#include <stdio.h>

// recursividade

/*
Recursividade é o ato de uma funcao chamar a si mesma.
OBS: É importante que a função recursiva tenha uma condição de parada
*/

int fib(int n) {
    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    int qtd;

    printf("Informe o tamanho da sequência fibonacci: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++) {
        printf("%d ", fib(i + 1));
    }

    return 0;
}
