/*
Leia um valor inteiro em segundos, e o imprima em horas, minutos e segundos.
*/

#include <stdio.h>

int main() {
    int segundos;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    printf("Horas: %d\n", horas);

    segundos = segundos - (horas * 3600);

    int minutos = segundos / 60;
    printf("Minutos: %d\n", minutos);

    segundos = segundos - minutos * 60;
    printf("Segundos: %d\n", segundos);

    return 0;
}
