/*
Leia um número inteiro e imprima seu antessesor e seu sucessor
*/

#include <stdio.h>

int main() {
    int numero, sucessor, antecessor;

    printf("Digite um número: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("%d %d %d", antecessor, numero, sucessor);

    return 0;
}
