/*
A importância de  R$ 780.000,00 será dividida entre 3 ganhadores.
O 1° ficara com 46%
O 2° ficara com 32%
o 3° ficara com o restante
*/

#include <stdio.h>

int main() {
    double valor_total = 780000;
    double v1, v2, v3;

    v1 = valor_total * 0.46;
    v2 = v1 * 0.32;
    v3 = valor_total - v1 - v2;
    
    printf("R$%.2lf R$%.2lf R$%.2lf", v1, v2, v3);

    return 0;
}
