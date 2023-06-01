#include <stdio.h>

int main()
{
    double nota1, nota2, peso_nota_1, peso_nota_2, media_ponderada;
    printf("Digite a 1° nota: ");
    scanf("%lf", &nota1);

    if (nota1 < 0 || nota1 > 10)
    {
        printf("Digite uma nota válida");
        return 0;
    }

    printf("Digite o peso 1° nota: ");
    scanf("%lf", &peso_nota_1);

    if (peso_nota_1 < 0 || peso_nota_1 > 10)
    {
        printf("Digite um peso de nota válido");
        return 0;
    }

    printf("Digite a 2° nota: ");
    scanf("%lf", &nota2);

    if (nota2 < 0 || nota2 > 10)
    {
        printf("Digite uma nota válida");
        return 0;
    }

    printf("Digite o peso 2° nota: ");
    scanf("%lf", &peso_nota_2);

    if (peso_nota_2 < 0 || peso_nota_2 > 10)
    {
        printf("Digite um peso de nota válido");
        return 0;
    }

    if ((peso_nota_1 + peso_nota_2) != 10)
    {
        printf("Soma dos pesos é diferente de 10");
        return 0;
    }

    media_ponderada = (peso_nota_1 * nota1 + peso_nota_2 * nota2) / (peso_nota_1 + peso_nota_2);

    printf("A média ponderada é: %.2lf", media_ponderada);

    return 0;
}