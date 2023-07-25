#include <stdio.h>
#include <string.h>

int main()
{
    char frase[150];
    char palavra[15];

    printf("Digite sua frase: ");
    scanf("%[^\n]", frase);

    printf("Agora digite uma palavra para procurarmos na frase: ");
    scanf("%s", palavra);

    int vezes_palavra = 0;
    int tamanho_palavra_user = strlen(palavra);

    for (int i = 0; i < 150; i++)
    {
        if (frase[i] == '\0')
        {
            break;
        }
        else if (frase[i] != ' ')
        {
            char palavra_frase[15];
            int j = 0;

            while (frase[i] != '\0' && frase[i] != ' ' && j < 15)
            {
                palavra_frase[j] = frase[i];
                i++;
                j++;
            }

            palavra_frase[j] = '\0';

            if (strcmp(palavra_frase, palavra) == 0)
            {
                vezes_palavra++;
            }
        }
    }

    printf("Número de ocorrências: %d\n", vezes_palavra);

    return 0;
}
