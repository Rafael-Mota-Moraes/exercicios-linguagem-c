#include <stdio.h>

int main()
{
    char palavra_1[16];
    char palavra_2[16];

    printf("Digite uma palavra de no máximo 15 caracteres: ");
    scanf("%15s", palavra_1);

    printf("Digite uma palavra de no máximo 15 caracteres: ");
    scanf("%15s", palavra_2);

    int tamanho_1 = 0;
    int tamanho_2 = 0;
    int anagrama = 1;

    for (int i = 0; i < 15; i++)
    {
        if (palavra_1[i] == '\0')
        {
            break;
        }
        else
        {
            tamanho_1++;
        }
    }

    for (int i = 0; i < 15; i++)
    {
        if (palavra_2[i] == '\0')
        {
            break;
        }
        else
        {
            tamanho_2++;
        }
    }

    if (tamanho_1 != tamanho_2)
    {
        anagrama = 0;
    }
    else
    {
        for (int i = 0; i < tamanho_1; i++)
        {
            int encontrou = 0;

            for (int j = 0; j < tamanho_2; j++)
            {
                if (palavra_1[i] == palavra_2[j])
                {
                    encontrou = 1;
                    palavra_2[j] = ' ';
                    break;
                }
            }

            if (encontrou == 0)
            {
                anagrama = 0;
                break;
            }
        }
    }

    if (anagrama == 1)
    {
        printf("São anagramas\n");
    }
    else
    {
        printf("Não são anagramas\n");
    }

    return 0;
}
