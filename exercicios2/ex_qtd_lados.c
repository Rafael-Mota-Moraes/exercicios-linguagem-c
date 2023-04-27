#include <stdio.h>

int main(int argc, char const *argv[])
{
    int qtd_lados;

    printf("Quantos lados tem sua figura? ");
    scanf("%d", &qtd_lados);

    if (qtd_lados > 10)
    {
        printf("Máximo de lados suportados é 10");
    }

    if (qtd_lados < 3)
    {
        printf("Digite um valor válido! (entre 3 e 10)");
    }

    if (qtd_lados == 3)
    {
        printf("A figura é um triângulo\n\n\n\n!");
    }
    else if (qtd_lados == 4)
    {
        printf("A figura é um quadrilátero\n\n\n\n!");
    }
    else if (qtd_lados == 5)
    {
        printf("A figura é um pentágono\n\n\n\n!");
    }
    else if (qtd_lados == 6)
    {
        printf("A figura é um hexágono\n\n\n\n!");
    }
    else if (qtd_lados == 7)
    {
        printf("A figura é um heptágono\n\n\n\n!");
    }
    else if (qtd_lados == 8)
    {
        printf("A figura é um octágono\n\n\n\n!");
    }
    else if (qtd_lados == 9)
    {
        printf("A figura é um eneágono\n\n\n\n!");
    }
    else if (qtd_lados == 10)
    {
        printf("A figura é um decágono\n\n\n\n!");
    }

    return 0;
}
