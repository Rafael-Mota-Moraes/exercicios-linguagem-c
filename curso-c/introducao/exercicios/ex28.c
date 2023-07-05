/*
    Faça a leitura de 3 valores e apresente o resultado da soma dos quadrados desses 3 valores
*/

#include <stdio.h>

int main() {
    double v1, v2, v3;

    printf("Digite o 1° valor: ");
    scanf("%lf", &v1);

    printf("Digite o 2° valor: ");
    scanf("%lf", &v2);

    printf("Digite o 3° valor: ");
    scanf("%lf", &v3);

    double quadrado_1, quadrado_2, quadrado_3;

    quadrado_1 = v1 * v1;
    quadrado_2 = v2 * v2;
    quadrado_3 = v3 * v3;

    double soma_dos_quadrados = quadrado_1 + quadrado_2 + quadrado_3;

    printf("A soma dos quadrados é %lf", soma_dos_quadrados);

    return 0;
}