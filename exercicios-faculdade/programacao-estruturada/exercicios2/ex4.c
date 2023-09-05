/*
Faça um programa em C que receba um valor até 9999. Ex: 6226, 3113. Para isso
receba o valor em uma variável inteira e após isso monte um vetor com os
valores:
6 2 2 6
M C D U
*/
#include <stdio.h>

int main()
{
    int valor;
    int digitos[4];

    printf("Digite um valor entre 0 e 9999: ");
    scanf("%d", &valor);

    if (valor < 0 || valor > 9999)
    {
        printf("Valor fora do intervalo válido.\n");
        return 1;
    }

    digitos[0] = valor / 1000;
    digitos[1] = (valor % 1000) / 100;
    digitos[2] = (valor % 100) / 10;
    digitos[3] = valor % 10;

    printf("Milhar: %d\n", digitos[0]);
    printf("Centena: %d\n", digitos[1]);
    printf("Dezena: %d\n", digitos[2]);
    printf("Unidade: %d\n", digitos[3]);

    return 0;
}
