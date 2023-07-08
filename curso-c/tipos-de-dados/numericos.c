#include <stdio.h>

/*
Tipos de dados

Tipos Numéricos:
 - Inteiros
 - Reais
*/

int main() {
    // Inteiro
    int numero_inteiro; // 7, 8, 9

    // Reais
    float numero_real; // 1.1, 2.56, 3.14
    double outro_numero_real; // 2.4, 9.76

    float nota_1, nota_2;

    printf("Qual a primeira nota: ");
    scanf("%f", &nota_1);

    printf("Qual a segunda nota: ");
    scanf("%f", &nota_2);

    float media = (nota_1 + nota_2) / 2;

    printf("Sua média é: %.2f", media);

    return 0;
}
