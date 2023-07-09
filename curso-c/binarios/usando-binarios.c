#include <stdio.h>

int main() {
    int valor = 2;

    // deslocando bits para esquerda
    valor = valor << 2;

    printf("%d\n", valor);

    // deslocando bits para direita
    valor = valor >> 2;

    printf("%d\n", valor);

    // negação
    valor = ~valor;
    printf("%d\n", valor);

    return 0;
}
