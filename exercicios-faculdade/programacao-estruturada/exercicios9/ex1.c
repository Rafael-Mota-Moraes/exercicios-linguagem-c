/*
Faça um programa em “C” que conte quantas vezes determinada letra (informada) aparece no arquivo de texto texto.txt.
*/

#include <stdio.h>

int main()
{
    FILE *arq;
    arq = fopen("texto.txt", "r+");

    if (arq == NULL)
    {
        printf("Erro na abertura do arquivo.");
        return 1;
    }

    printf("Arquivo aberto com sucesso.\n");

    char letra;

    char letra_usuario;
    int qtd_vezes = 0;
    printf("Digite a letra que deseja contar: ");
    scanf(" %c", &letra_usuario);

    while ((letra = fgetc(arq)) != EOF)
    {

        printf("%c", letra);
        if (letra == letra_usuario)
        {
            qtd_vezes++;
        }
    }

    printf("\nA letra %c apareceu %d vezes", letra_usuario, qtd_vezes);

    fclose(arq);

    return 0;
}
