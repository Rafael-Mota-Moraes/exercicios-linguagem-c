/*
    Leia um número real e imprima a quinta parte desse número
*/

#include <stdio.h>

int main() {
    double numero, quinta_parte;
    
    printf("Digite um número: ");
    scanf("%lf", &numero);

    quinta_parte = numero / 5;

    printf("A quinta parte de %lf é  %lf", numero, quinta_parte);

    return 0;
}