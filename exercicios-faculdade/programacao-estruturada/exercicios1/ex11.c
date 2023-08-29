/*
Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do
saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis
serão as de 2, 5, 10, 50 e 100 reais. O programa não deve se preocupar com a quantidade de
notas existentes na máquina.

• Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma
nota de 50, três notas de 2.

• Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma
nota de 50, quatro notas de 10, uma nota de 5 e duas notas de 2.

• Exemplo 3: Para sacar a quantidade de 11 reais, o programa fornece uma nota de 5 e três
notas de 2.
*/

#include <stdio.h>

int main()
{
    int valor_saque;
    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &valor_saque);

    int qtd_notas_100 = 0, qtd_notas_50 = 0, qtd_notas_10 = 0, qtd_notas_5 = 0, qtd_notas_2 = 0;

    while (valor_saque >= 2)
    {
        if (valor_saque - 100 >= 2)
        {
            if (valor_saque >= 100)
            {
                valor_saque -= 100;
                qtd_notas_100++;
            }
        }

        else if (valor_saque - 50 >= 2)
        {

            if (valor_saque >= 50)
            {
                valor_saque -= 50;
                qtd_notas_50++;
            }
        }

        else if (valor_saque - 10 >= 2)
        {
            if (valor_saque >= 10)
            {
                valor_saque -= 10;
                qtd_notas_10++;
            }
        }

        else if (valor_saque - 5 >= 2)
        {
            if (valor_saque >= 5)
            {
                valor_saque -= 5;
                qtd_notas_5++;
            }
        }

        else if (valor_saque >= 2)
        {
            valor_saque -= 2;
            qtd_notas_2++;
        }
    }

    printf("Quantidade 100 = %d\n", qtd_notas_100);
    printf("Quantidade 50 = %d\n", qtd_notas_50);
    printf("Quantidade 10 = %d\n", qtd_notas_10);
    printf("Quantidade 5 = %d\n", qtd_notas_5);
    printf("Quantidade 2 = %d\n", qtd_notas_2);

    return 0;
}
