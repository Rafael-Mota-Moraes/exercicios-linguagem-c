#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }
    else
    {
        printf("Menor de idade\n");
    }

    return 0;
}
