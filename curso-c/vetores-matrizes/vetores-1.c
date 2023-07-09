#include <stdio.h>

// Vetores - parte 1

// array uni-dimensional
// char nome[50]

int main() {
    // vetores e strings
    char nome[50];
    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("Olá %s\n", nome);

    // vetores e caracteres
    char letras[26];

    int contador = 0;
    for(int i = 97; i <= 122; i++) {
        letras[contador] = i;
        contador++;
    }

    for(int i = 0; i < 26; i++) {
        printf("%c ", letras[i]);
    }
    
    return 0;
}
