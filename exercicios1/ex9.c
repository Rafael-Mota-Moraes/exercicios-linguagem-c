#include <stdio.h>
#include <locale.h>

/*
PROBLEMA DO MENOR TROCO

Um engenheiro está desenvolvendo uma máquina para venda de
bebidas.
Esta máquina irá aceitar pagamento em notas e em moedas. Porém, o
troco será dado apenas em moedas.
Desenvolva um algoritmo que leia o troco a ser dado em centavos e
responda qual é a menor combinação de moedas para esta quantia.
As moedas disponíveis são: 1 real, 50 centavos, 25 centavos, 10
centavos, 5 centavos.
Caso reste troco menor que 5 centavos,
a máquina não dará esta quantia.
*/

int main()	{
	int  total_troco_centavos, total_troco_centavos_inicial, qtd_moedas_1_real, qtd_moedas_50_centavos, qtd_moedas_25_centavos, qtd_moedas_10_centavos, qtd_moedas_5_centavos;
	double qtd_dinheiro_dado, valor_do_produto, total_troco;

	printf("Digite a quantida de dinheiro dada: ");
	scanf("%lf", &qtd_dinheiro_dado);

	printf("Digite o valor do produto: ");
	scanf("%lf", &valor_do_produto);

	total_troco = qtd_dinheiro_dado - valor_do_produto;
	total_troco_centavos = total_troco * 100;
	total_troco_centavos_inicial = total_troco_centavos;

	qtd_moedas_1_real = total_troco_centavos / 100;
	total_troco_centavos = total_troco_centavos - (qtd_moedas_1_real * 100);

	qtd_moedas_50_centavos = total_troco_centavos / 50;
	total_troco_centavos = total_troco_centavos - (qtd_moedas_50_centavos * 50);

	qtd_moedas_25_centavos = total_troco_centavos / 25;
	total_troco_centavos = total_troco_centavos - (qtd_moedas_25_centavos * 25);

	qtd_moedas_10_centavos = total_troco_centavos / 10;
	total_troco_centavos = total_troco_centavos - (qtd_moedas_10_centavos * 10);

	qtd_moedas_5_centavos = total_troco_centavos / 5;
	total_troco_centavos = total_troco_centavos - (qtd_moedas_5_centavos * 5);

	printf("Troco em centavos: %d\n", total_troco_centavos_inicial);
	printf("Qtd moedas 1 real de troco: %d\n", qtd_moedas_1_real);
	printf("Qtd moedas 50 centavos de troco: %d\n", qtd_moedas_50_centavos);
	printf("Qtd moedas 25 centavos de troco: %d\n", qtd_moedas_25_centavos);
	printf("Qtd moedas 10 centavos de troco: %d\n", qtd_moedas_10_centavos);
	printf("Qtd moedas 5 centavos de troco: %d\n", qtd_moedas_5_centavos);

	return 0;
}
