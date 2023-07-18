/*
Faça um programa para converter uma letra maiúscula em letra minúscula.
*/

#include <stdio.h>

int main() {
    char letra_maiuscula, letra_minuscula;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &letra_maiuscula);
    letra_minuscula = letra_maiuscula + 32;

    printf("Letra minúscula: %c", letra_minuscula);

    return 0;
}
