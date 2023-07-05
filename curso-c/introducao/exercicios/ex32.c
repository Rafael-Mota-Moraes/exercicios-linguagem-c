/*
Leia um número inteiro e imprima a soma do seu sucessor com o triplo do antecessor do seu dobro
*/

#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    int sucessor = numero - 1;

    int antecessor_do_dobro = numero * 2 - 1;
    int triplo_do_antecessor_do_dobro = antecessor_do_dobro * 3;

    int soma = sucessor + triplo_do_antecessor_do_dobro;

    printf("Resultado: %d", soma);

    return 0;
}
