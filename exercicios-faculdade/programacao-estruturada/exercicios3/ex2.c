/*
Dados dois vetores de inteiros x e y, já preenchidos cada um conforme instruções de entrada, faça um programa em C que implemente 3 funções conforme segue:

• Diferença entre x e y: todos os elementos de x que não existam em y.
• Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
• União entre x e y: todos os elementos de x, e todos os elementos de y que não estão em
x.
*/

#include <stdio.h>
#include <stdlib.h>

void diferenca(int array1[], int array2[])
{
    int diferenca[5]; // Array para armazenar a diferença
    int tamanho_diferenca = 0;

    // Encontrar elementos que estão em array1, mas não em array2
    for (int i = 0; i < 5; i++)
    {
        int elemento_encontrado = 0;

        for (int j = 0; j < 5; j++)
        {
            if (array1[i] == array2[j])
            {
                elemento_encontrado = 1;
                break;
            }
        }

        if (!elemento_encontrado)
        {
            diferenca[tamanho_diferenca++] = array1[i];
        }
    }

    // Imprimir a diferença na tela
    printf("Diferença: ");
    for (int i = 0; i < tamanho_diferenca; i++)
    {
        printf("%d ", diferenca[i]);
    }
    printf("\n");
}

void calcular_intersecao(int array1[], int array2[])
{
    int intersecao[5]; // Array para armazenar a interseção
    int tamanho_intersecao = 0;

    // Encontrar elementos que estão em ambos os arrays
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array1[i] == array2[j])
            {
                // Verificar se o elemento já está na interseção
                int ja_na_intersecao = 0;
                for (int k = 0; k < tamanho_intersecao; k++)
                {
                    if (intersecao[k] == array1[i])
                    {
                        ja_na_intersecao = 1;
                        break;
                    }
                }
                if (!ja_na_intersecao)
                {
                    intersecao[tamanho_intersecao++] = array1[i];
                }
            }
        }
    }

    // Imprimir a interseção na tela
    printf("Interseção: ");
    for (int i = 0; i < tamanho_intersecao; i++)
    {
        printf("%d ", intersecao[i]);
    }
    printf("\n");
}

void calcular_uniao(int array1[], int array2[])
{
    int uniao[10]; // Array para armazenar a união (o dobro do tamanho máximo)
    int tamanho_uniao = 0;

    // Adicionar elementos de array1 à união
    for (int i = 0; i < 5; i++)
    {
        int ja_na_uniao = 0;

        for (int j = 0; j < tamanho_uniao; j++)
        {
            if (array1[i] == uniao[j])
            {
                ja_na_uniao = 1;
                break;
            }
        }

        if (!ja_na_uniao)
        {
            uniao[tamanho_uniao++] = array1[i];
        }
    }

    // Adicionar elementos de array2 à união
    for (int i = 0; i < 5; i++)
    {
        int ja_na_uniao = 0;

        for (int j = 0; j < tamanho_uniao; j++)
        {
            if (array2[i] == uniao[j])
            {
                ja_na_uniao = 1;
                break;
            }
        }

        if (!ja_na_uniao)
        {
            uniao[tamanho_uniao++] = array2[i];
        }
    }

    // Imprimir a união na tela
    printf("União: ");
    for (int i = 0; i < tamanho_uniao; i++)
    {
        printf("%d ", uniao[i]);
    }
    printf("\n");
}

int main()
{
    int x[] = {1, 3, 5, 7, 9};
    int y[] = {1, 2, 3, 4, 5};

    diferenca(x, y);
    calcular_intersecao(x, y);
    calcular_uniao(x, y);

    return 0;
}
