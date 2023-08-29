/*
Chico tem 1,70m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3
centímetros por ano. Faça um programa em C que calcule e imprima quantos anos serão
necessários para que Juca seja maior que Chico.
*/

#include <stdio.h>

int main()
{
    int altura_chico = 170, altura_juca = 110;
    int anos_passados = 0;

    while (altura_chico >= altura_juca)
    {
        altura_chico += 2;
        altura_juca += 3;

        anos_passados++;
    }

    printf("Foram necessários %d anos \n\n", anos_passados);

    return 0;
}
