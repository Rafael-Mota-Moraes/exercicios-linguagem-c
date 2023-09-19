#include <stdio.h>

int calcular_minutos_das_horas(int hora_inicio, int hora_final)
{
    printf("Horas: %d %d \n", hora_inicio, hora_final);

    if (hora_inicio < hora_final)
    {
        return (hora_final - hora_inicio) * 60;
    }
    else if (hora_final == hora_inicio)
    {
        return 0;
    }
    else
    {
        int horas_entre_as_horas = 24 - hora_inicio + hora_final;

        return horas_entre_as_horas * 60;
    }
}

int calcular_minutos(int minuto_inicio, int minuto_final)
{
    printf("Minutos: %d %d \n", minuto_inicio, minuto_final);

    if (minuto_final < minuto_inicio)
    {
        int minutos_ate_60 = 60 - minuto_final;
        int minutos = (minutos_ate_60 + minuto_inicio) + minuto_inicio;

        return minutos;
    }
    else if (minuto_inicio == minuto_final)
    {
        return 0;
    }
    else
    {
        printf("CAIU AQUI");
        return minuto_final - minuto_inicio;
    }
}

int calcular_horas(int hora_inicio, int hora_final, int minuto_inicio, int minuto_final)
{
    int minutos_das_horas = calcular_minutos_das_horas(hora_inicio, hora_final);
    int minutos_minutos = calcular_minutos(minuto_inicio, minuto_final);

    return minutos_das_horas + minutos_minutos;
}
