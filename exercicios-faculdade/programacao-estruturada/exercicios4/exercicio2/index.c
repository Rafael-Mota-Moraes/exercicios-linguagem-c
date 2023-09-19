/*
Faça uma função que recebe, por parâmetros, a hora de inicio e a hora de término de um jogo,
ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar a duração
do jogo em minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e
que o jogo pode começar em um dia e terminar no outro.
*/

#include <stdio.h>
#include "func.h"

int main()
{
    printf("Minutos = %d \n", calcular_horas(23, 1, 30, 30));

    return 0;
}
