#include <stdio.h>

int main()
{
    double nota_1, nota_2, nota_3, media_harmonica, divisor;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota_1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota_2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &nota_3);

    if (nota_1 > 10 || nota_1 < 0 || nota_2 > 10 || nota_2 < 0 || nota_3 > 10 || nota_3 < 0)
    {
        printf("Digite notas válidas!");
    }

    if (nota_1 == 0 || nota_2 == 0 || nota_3 == 0)
    {
        media_harmonica = 0;
        printf("A média harmônica das 3 notas é: %.1f", media_harmonica);
        return 0;
    }

    divisor = (1 / nota_1 + 1 / nota_2 + 1 / nota_3);
    media_harmonica = 3 / divisor;

    printf("A média harmônica das 3 notas é: %.1f", media_harmonica);

    return 0;
}