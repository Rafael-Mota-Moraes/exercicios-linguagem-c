#include <stdio.h>

void func(int vet[][2], int vet1[][2], int vet2[][2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (i == 0)
                {

                    vet2[i][j][k] = vet[j][k];
                }
                else
                {
                    vet2[i][j][k] = vet1[j][k];
                }
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", vet2[i][j][k]);
            }
            printf("\n");
        }

        printf("\n");
    }
}