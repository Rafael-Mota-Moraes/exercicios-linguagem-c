#include <stdio.h>

// enum -> enumeração

enum dias_da_semana {
    seguda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo,
};

int main() {

    enum dias_da_semana d1, d2;

    d1 = quinta;
    d2 = 4;

    if(d1 == d2) {
        printf("Os dias são iguais\n");
    } else {
        printf("Os dias não são iguais\n");
    }

    printf("%d %d\n", d1, d2);

    return 0;
}
