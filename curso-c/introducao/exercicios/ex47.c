/*
Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 digito por dia
*/

#include <stdio.h>

int main() {
    char numero[5];

    printf("Digite um inteiro de 4 digitos: ");
    scanf("%4c", numero);
    
    for(int i = 0; i < 4; i++) {
        printf("%c \n", numero[i]);
    }

    return 0;
}
