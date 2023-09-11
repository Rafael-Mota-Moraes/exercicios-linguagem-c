#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_PECAS 28
#define PECAS_POR_JOGADOR 7

// Função para inicializar as peças de dominó
void inicializarPecas(int pecas[][2])
{
    int indice = 0;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i; j <= 6; j++)
        {
            pecas[indice][0] = i;
            pecas[indice][1] = j;
            indice++;
        }
    }
}

// Função para embaralhar as peças
void embaralharPecas(int pecas[][2])
{
    for (int i = 0; i < TOTAL_PECAS; i++)
    {
        int j = rand() % TOTAL_PECAS;
        int temp1 = pecas[i][0];
        int temp2 = pecas[i][1];
        pecas[i][0] = pecas[j][0];
        pecas[i][1] = pecas[j][1];
        pecas[j][0] = temp1;
        pecas[j][1] = temp2;
    }
}

int main()
{
    srand(time(NULL));

    int pecas[TOTAL_PECAS][2];
    inicializarPecas(pecas);
    embaralharPecas(pecas);

    int jogador1[PECAS_POR_JOGADOR][2];
    int jogador2[PECAS_POR_JOGADOR][2];

    // Distribuir 7 peças para cada jogador
    for (int i = 0; i < PECAS_POR_JOGADOR; i++)
    {
        jogador1[i][0] = pecas[i][0];
        jogador1[i][1] = pecas[i][1];
        jogador2[i][0] = pecas[i + PECAS_POR_JOGADOR][0];
        jogador2[i][1] = pecas[i + PECAS_POR_JOGADOR][1];
    }

    printf("Peças do jogador 1:\n");
    for (int i = 0; i < PECAS_POR_JOGADOR; i++)
    {
        printf("[%d|%d] ", jogador1[i][0], jogador1[i][1]);
    }

    printf("\nPeças do jogador 2:\n");
    for (int i = 0; i < PECAS_POR_JOGADOR; i++)
    {
        printf("[%d|%d] ", jogador2[i][0], jogador2[i][1]);
    }

    printf("\nPeças restantes na pilha:\n");
    for (int i = 2 * PECAS_POR_JOGADOR; i < TOTAL_PECAS; i++)
    {
        printf("[%d|%d] ", pecas[i][0], pecas[i][1]);
    }

    return 0;
}
