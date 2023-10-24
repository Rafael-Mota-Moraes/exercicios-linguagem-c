#include <stdio.h>
#include <string.h>

struct carro
{
    char placa[8];
};

struct hora_entrada
{
    int horas;
    int minutos;
};

struct hora_saida
{
    int horas;
    int minutos;
};

int main()
{
    struct carro c1;
    strcpy(c1.placa, "LSN4I49");

    struct hora_entrada he;
    he.horas = 11;
    he.minutos = 30;

    struct hora_saida hs;
    hs.horas = 13;
    hs.minutos = 25;

    int horas = hs.horas - he.horas;
    int minutos = hs.minutos - he.minutos;

    if (minutos < 0)
    {
        minutos += 60;
        horas--;
    }

    float preco_por_hora_primeira = 5.0;
    float preco_por_hora_outras = 2.0;

    float preco_por_minuto_primeiro = preco_por_hora_primeira / 60;
    float preco_por_minuto_outros = preco_por_hora_outras / 60;

    float preco_final = 0;

    if (horas > 0)
    {
        preco_final += preco_por_hora_primeira;
        horas--;

        if (horas > 0)
        {
            preco_final += horas * preco_por_hora_outras;
        }
    }

    if (minutos > 0)
    {
        preco_final += preco_por_minuto_outros * minutos;
    }

    printf("Placa do carro: %s\n", c1.placa);
    printf("Tempo estacionado: %d horas e %d minutos\n", horas, minutos);
    printf("Preco: R$%.2f\n", preco_final);

    return 0;
}
