/*
Fazer uma função que recebe um mês e um ano como parâmetros e retorna o número de dias daquele mês/ano. Dica: um ano é bissexto quando é múltiplo de 4 e não múltiplo de 100, ou também quando é múltiplo de 400.
*/

#include <stdio.h>

int is_bissexto(int ano)
{
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int numero_dias_mes(int mes, int ano)
{
    int bissexto = is_bissexto(ano);

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        printf("Mes %d de %d teve 31 dias.", mes, ano);
    }
    else if (mes == 2)
    {
        if (bissexto == 1)
        {

            printf("Mes %d de %d teve 29 dias.", mes, ano);
        }
        else
        {
            printf("Mes %d de %d teve 29 dias.", mes, ano);
        }
    }
    else
    {
        printf("Mes %d de %d teve 30 dias.", mes, ano);
    }
}

int main()
{
    int mes, ano;

    printf("Digite mes e ano: ");
    scanf("%d %d", &mes, &ano);

    numero_dias_mes(mes, ano);
    return 0;
}
