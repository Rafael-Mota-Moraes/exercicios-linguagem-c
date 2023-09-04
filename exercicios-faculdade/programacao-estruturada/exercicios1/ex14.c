/*
Faça um programa que desenhe na tela losangos ou triângulos utilizando somente o caractere
“%” (veja exemplos abaixo). O usuário é quem escolhe o que deve ser impresso. O usuário
também deve ter a opção de escolher o tamanho (em linhas) da figura a ser desenhada.
*/

#include <stdio.h>

void desenharLosango(int tamanho) {
    int i, j;
    for (i = 1; i <= tamanho; i++) {
        for (j = 1; j <= tamanho - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c", '%');
        }
        printf("\n");
    }
    for (i = tamanho - 1; i >= 1; i--) {
        for (j = 1; j <= tamanho - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c", '%');
        }
        printf("\n");
    }
}

void desenharTriangulo(int tamanho) {
    int i, j;
    for (i = 1; i <= tamanho; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", '%');
        }
        printf("\n");
    }
}

int main() {
    int escolha, tamanho;
    
    printf("Escolha o que deseja desenhar:\n");
    printf("1 - Losango\n");
    printf("2 - Triangulo\n");
    scanf("%d", &escolha);
    
    printf("Digite o tamanho (em linhas) da figura: ");
    scanf("%d", &tamanho);
    
    if (escolha == 1) {
        desenharLosango(tamanho);
    } else if (escolha == 2) {
        desenharTriangulo(tamanho);
    } else {
        printf("Escolha invalida.\n");
    }
    
    return 0;
}
