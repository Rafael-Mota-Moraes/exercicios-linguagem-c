#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Digite o horário atual: h:m:s\n");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("Digite a duração do experimento (em segundos): \n");

    int duracao_experimento;
    scanf("%d", &duracao_experimento);

    int duracao_experimento_minutos = 0, duracao_experimento_horas = 0, duracao_experimento_segundos = 0;

    if (duracao_experimento >= 3600) {
        duracao_experimento_horas = duracao_experimento / 3600;
        duracao_experimento %= 3600;
    }

    if (duracao_experimento >= 60) {
        duracao_experimento_minutos = duracao_experimento / 60;
        duracao_experimento %= 60;
    }

    duracao_experimento_segundos = duracao_experimento;

    segundos += duracao_experimento_segundos;
    if (segundos >= 60) {
        minutos += segundos / 60;
        segundos %= 60;
    }

    minutos += duracao_experimento_minutos;
    if (minutos >= 60) {
        horas += minutos / 60;
        minutos %= 60;
    }

    horas += duracao_experimento_horas;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
