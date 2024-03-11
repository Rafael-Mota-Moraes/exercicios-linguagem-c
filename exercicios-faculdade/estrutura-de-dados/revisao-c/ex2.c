#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("ex2.txt", "r");

    if (!arq)
        return EXIT_FAILURE;

    int qtd;
    fscanf(arq, "%d", &qtd);

    printf("Quantidade de linhas: %d\n", qtd);

    char string[20];
    int num;
    for (int i = 0; i < qtd; i++)
    {
        fscanf(arq, "%d %s", &num, string);

        printf("[%d %s]\n", num, string);
    }

    return 0;
}
