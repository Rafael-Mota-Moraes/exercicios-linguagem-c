/*
Dado uma matriz 5x5 fazer um programa que:
- Calcular a soma de todas as linhas e a soma das duas diagonais da matriz.
- Deve realizar a soma tanto horizontais como diagonais por laços. (for).
Horizontais (soma de todas as linhas da tabela)
Diagonais (0,0 1,1 2,2 3,3 4,4 e 0,4 1,3 2,2 3,1 4,0)
*/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int somaHorizontais = 0;
    int somaDiagonais = 0;

    // Calcular a soma das linhas e das diagonais
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            somaHorizontais += matriz[i][j]; // Soma das linhas
            if (i == j || i + j == 4)
            {
                somaDiagonais += matriz[i][j]; // Soma das diagonais
            }
        }
    }

    // Imprimir os resultados
    printf("Soma horizontais: %d\n", somaHorizontais);
    printf("Soma diagonais: %d\n", somaDiagonais);

    return 0;
}
