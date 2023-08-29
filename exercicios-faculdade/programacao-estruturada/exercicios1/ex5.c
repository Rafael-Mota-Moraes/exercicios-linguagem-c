#include <stdio.h>

void maior_entre_tres_valores(int v1, int v2, int v3)
{
    int maior, menor, intermediario;

    if (v1 >= v2 && v1 >= v3)
    {
        maior = v1;
        if (v2 >= v3)
        {
            intermediario = v2;
            menor = v3;
        }
        else
        {
            intermediario = v3;
            menor = v2;
        }
    }
    else if (v2 >= v1 && v2 >= v3)
    {
        maior = v2;
        if (v1 >= v3)
        {
            intermediario = v1;
            menor = v3;
        }
        else
        {
            intermediario = v3;
            menor = v1;
        }
    }
    else
    {
        maior = v3;
        if (v1 >= v2)
        {
            intermediario = v1;
            menor = v2;
        }
        else
        {
            intermediario = v2;
            menor = v1;
        }
    }

    printf("O maior valor é: %d\n", maior);
    printf("O valor intermediário é: %d\n", intermediario);
    printf("O menor valor é: %d\n", menor);
}

int main()
{
    int v1, v2, v3;

    printf("Digite 3 valores: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    maior_entre_tres_valores(v1, v2, v3);

    return 0;
}
