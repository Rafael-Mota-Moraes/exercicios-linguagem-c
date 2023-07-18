/*
Escreva um programa de ajuda para vendedors. A partir de um valor total lido, mostre:

- O total a pagar com desconto de 10%
- O valor de cada parcela, no parcelamento de 3x sem juros
- A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
- A comissão do vendedor, no caso da venda ser a parcelada (5% sobre o valor total)
*/

#include <stdio.h>

int main() {
    double total;

    printf("Digite o valor do produto: ");
    scanf("%lf", &total);

    printf("O total a pagar com desconto de 10%% é %.2lf\n", (total * 0.9));

    printf("O valor de cada parcela, no parcelamento de 3x sem juros é: %.2lf\n", (total / 3));

    printf("A comissão do vendedor, no caso da venda ser a vista: %.2lf\n",((total * 0.9) * 0.05));

    printf("A comissão do vendedor, no caso da venda ser a parcelada: %.2lf\n",(total  * 0.05));

    return 0;
}