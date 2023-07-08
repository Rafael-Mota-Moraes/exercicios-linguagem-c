#include <stdio.h>

int main() {
    // declaração de uma string em c
    char nome[50]; // 49 caracteres + \0

    printf("Qual é o seu nome? ");
    gets(nome);

    printf("Seu nome é: %s", nome);

    return 0;
}
