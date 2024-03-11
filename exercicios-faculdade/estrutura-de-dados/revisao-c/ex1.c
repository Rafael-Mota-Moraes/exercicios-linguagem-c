/*
◦ Abra e leia um arquivo de texto que contém um inteiro por linha,
sendo que o primeiro inteiro indica o número restante de elementos;

◦ Armazene estes inteiros em um vetor alocado dinamicamente;

◦ Imprima os elementos do vetor no formato {e1, e2, ..., eN};
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("ex1.txt", "r");

    if (!arq)
    {
        return EXIT_FAILURE;
    }

    int qtd;
    fscanf(arq, "%d", &qtd);

    printf("Quantidade de inteiros: %d\n", qtd);

    char c;
    printf("{");
    if (qtd != 0)
    {
        for (int i = 0; i < qtd - 1; i++)
        {
            fscanf(arq, "%c", &c);
            printf("%d, ", c);
        }
        fscanf(arq, "%c", &c);
        printf("%d", c);
    }
    printf("}\n");

    fclose(arq);

    return 0;
}
