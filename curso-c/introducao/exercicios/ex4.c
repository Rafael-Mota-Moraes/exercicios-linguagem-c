/*
    Leia um número real e imprima o quadrado desse número
*/

#include <stdio.h>

int main() {
    double numero;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    double quadrado = numero * numero;

    printf("O quadrado de %lf é %lf", numero, quadrado);

    return 0;
}
