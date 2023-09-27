/*
Escreva uma função CALCULA que:
• receba como parâmetros duas variáveis inteiras, X e Y;
• retorne em X a soma de X e Y;
• retorne em Y a subtração de X e Y.
▪ Obs: Não deve ser criada mais nenhuma variável além de X e Y, tanto na função
MAIN como na CALCULA.
*/

#include <stdio.h>

void calcula(int *x, int *y)
{
    *y = *x + *y;
    *x = *x - (*y - *x);
}

int main()
{
    int x = 6, y = 5;

    calcula(&x, &y);

    printf("\nSoma: %d", y);
    printf("\nSubtracao: %d\n", x);

    return 0;
}
