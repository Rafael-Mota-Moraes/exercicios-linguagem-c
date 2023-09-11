#include <stdio.h>

int verificaVitoria(char jogo[3][3])
{
    // Verifica linhas
    for (int i = 0; i < 3; i++)
    {
        if (jogo[i][0] == jogo[i][1] && jogo[i][1] == jogo[i][2] && jogo[i][0] != ' ')
            return 1;
    }

    // Verifica colunas
    for (int j = 0; j < 3; j++)
    {
        if (jogo[0][j] == jogo[1][j] && jogo[1][j] == jogo[2][j] && jogo[0][j] != ' ')
            return 1;
    }

    // Verifica diagonais
    if (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && jogo[0][0] != ' ')
        return 1;
    if (jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] && jogo[0][2] != ' ')
        return 1;

    return 0;
}

int main()
{
    char jogo[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

    int ganhou = 0;
    char vez = 'X';

    while (ganhou == 0)
    {
        int linha = 0, coluna = 0;

        printf("Digite X e Y\n");

        if (vez == 'X')
        {
            printf("Vez de X: ");
            scanf("%d %d", &linha, &coluna);

            if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ')
            {
                printf("Jogada inválida\n");
                continue;
            }

            jogo[linha][coluna] = 'X';
        }
        else
        {
            printf("Vez de O: ");
            scanf("%d %d", &linha, &coluna);

            if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ')
            {
                printf("Jogada inválida\n");
                continue;
            }

            jogo[linha][coluna] = 'O';
        }

        printf("0 1 2\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", jogo[i][j]);
            }
            printf("\n");
        }

        if (verificaVitoria(jogo))
        {
            printf("Jogador %c venceu!\n", vez);
            ganhou = 1;
        }
        else if (jogo[0][0] != ' ' && jogo[0][1] != ' ' && jogo[0][2] != ' ' &&
                 jogo[1][0] != ' ' && jogo[1][1] != ' ' && jogo[1][2] != ' ' &&
                 jogo[2][0] != ' ' && jogo[2][1] != ' ' && jogo[2][2] != ' ')
        {
            printf("Empate!\n");
            ganhou = 1;
        }

        if (vez == 'X')
        {
            vez = 'O';
        }
        else
        {
            vez = 'X';
        }
    }

    return 0;
}
