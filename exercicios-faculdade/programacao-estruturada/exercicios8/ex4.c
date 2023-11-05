/*Escreva uma função que receba duas string. A função deverá concatenar a segunda string ao final da primeira (simulando a função strcat).*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concatena(char str1[], char str2[])
{
    int tam1, tam2;
    tam1 = strlen(str1);
    tam2 = strlen(str2);

    int tamanho_strings = tam1 + tam2;

    char *concatenada = (char *)malloc((tamanho_strings + 1) * sizeof(char));
    int index_atual = 0;

    for (int i = 0; i < tam1; i++)
    {
        if (str1[i] != '\0' && str1[i] != '\n')
        {
            concatenada[index_atual] = str1[i];
            index_atual++;
        }
    }

    for (int i = 0; i < tam2; i++)
    {
        if (str2[i] != '\0' && str2[i] != '\n')
        {
            concatenada[index_atual] = str2[i];
            index_atual++;
        }
    }

    concatenada[index_atual] = '\0';

    return concatenada;
}

int main()
{
    char str1[] = "Rafa ";
    char str2[] = "Moreira";

    char *concatenada = concatena(str1, str2);

    printf("%s", concatenada);

    return 0;
}
