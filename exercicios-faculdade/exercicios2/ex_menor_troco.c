#include <stdio.h>

int main()
{
    int qtd_dinheiro_dado, valor_do_produto, total_troco;

    printf("Digite a quantia de troco dada em centavos: ");
    scanf("%d", &total_troco);

    int qtd_moedas_1_real;
    qtd_moedas_1_real = total_troco / 100;
    total_troco = total_troco % 100;

    int qtd_moedas_50_centavos;
    qtd_moedas_50_centavos = total_troco / 50;
    total_troco = total_troco % 50;

    int qtd_moedas_25_centavos;
    qtd_moedas_25_centavos = total_troco / 25;
    total_troco = total_troco % 25;

    int qtd_moedas_10_centavos;
    qtd_moedas_10_centavos = total_troco / 10;
    total_troco = total_troco % 10;

    int qtd_moedas_5_centavos;
    qtd_moedas_5_centavos = total_troco / 5;
    total_troco = total_troco % 5;

    if (qtd_moedas_1_real != 0)
    {
        printf("Qtd moedas 1 real de troco: %d\n", qtd_moedas_1_real);
    }

    if (qtd_moedas_50_centavos != 0)
    {
        printf("Qtd moedas 50 centavos de troco: %d\n", qtd_moedas_50_centavos);
    }

    if (qtd_moedas_25_centavos != 0)
    {
        printf("Qtd moedas 25 centavos de troco: %d\n", qtd_moedas_25_centavos);
    }

    if (qtd_moedas_25_centavos != 0)
    {
        printf("Qtd moedas 10 centavos de troco: %d\n", qtd_moedas_10_centavos);
    }

    if (qtd_moedas_10_centavos != 0)
    {
        printf("Qtd moedas 5 centavos de troco: %d\n", qtd_moedas_5_centavos);
    }

    return 0;
}