/*
Escreva um programa em “C” que simule a jogada de dois dados. O programa deve usar um rand para cada dado. A soma dos dois valores deve ser calculada. Como cada dado pode representar um valor inteiro de 1 a 6, a soma dos dois variará de 2 a 12, sendo a soma 7 a mais frequente e a 2 e 12 as somas menos frequentes. A tabela abaixo mostra as 36 combinações. O programa deve rolar os dados 40.000 vezes. Armazene o resultado em um array 6x6, ou seja, caso o os dados rolados sejam 1 e 1, adicione 1 ao Índice 0,0. Armazene a soma também dos dados em um vetor de 12 posições. Após todas  as jogadas mostre o array e o vetor com a quantidade de vezes de cada combinação.
*/
#include <stdio.h>
#include <stdlib.h> // rand
#include <time.h>

int main()
{
    int dado_1 = 0, dado_2 = 0;
    int vetor_qtd[6][6] = {};

    srand(time(NULL));

    for (int i = 0; i < 40000; i++)
    {
        dado_1 = (rand() % 6 + 1) - 1;
        dado_2 = (rand() % 6 + 1) - 1;

        vetor_qtd[dado_1][dado_2]++;
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d ", vetor_qtd[i][j]);
        }

        printf("\n");
    }
}