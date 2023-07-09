#include <stdio.h>

// Matrizes - parte 1

// array multi-dimensional
// char nome[50]

int main() {
    // vetores e strings
    char nome[3][50];
    for(int i = 0; i < 3; i++) {
        printf("Qual seu nome? ");
        scanf("%s", nome[i]);
    }

    for(int i = 0; i < 3; i++) {
        printf("Olá %s\n", nome[i]);
    }
    
    return 0;
}
