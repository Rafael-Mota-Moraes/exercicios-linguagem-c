/*
Baseado em um “baralho tradicional” (cada carta tem seu naipe e seu valor), implemente a
parte de montagem e distribuição (sorteio) de cartas para 2 jogadores, considerando que cada
jogador irá receber N cartas. Exiba na tela as cartas que cada um dos jogadores recebeu e as
cartas restantes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct carta
{
    int numero;
    char naipe[20];
};

struct carta cartas[52];

void gerar_cartas()
{

    int index_carta = 0;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 13; j++)
        {
            if (i == 1)
                strcpy(cartas[index_carta].naipe, "espadas");
            if (i == 2)
                strcpy(cartas[index_carta].naipe, "paus");
            if (i == 3)
                strcpy(cartas[index_carta].naipe, "copas");
            if (i == 4)
                strcpy(cartas[index_carta].naipe, "ouros");

            cartas[index_carta].numero = j;

            index_carta++;
        }
    }
}

void embaralhar(struct carta cartas[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int r = rand() % tamanho;

        struct carta temp = cartas[i];
        cartas[i] = cartas[r];
        cartas[r] = temp;
    }
}

int main()
{
    gerar_cartas();
    embaralhar(cartas, 52);

    for (int i = 0; i < 52; i++)
    {
        printf("%d de %s\n", cartas[i].numero, cartas[i].naipe);
    }
}
