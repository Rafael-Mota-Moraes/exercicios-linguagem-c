#include <stdio.h>

int main()
{
  int dia, mes, ano;
  int max_dias;

  printf("Digite dia: ");
  scanf("%d", &dia);

  printf("Digite mes: ");
  scanf("%d", &mes);

  printf("Digite ano: ");
  scanf("%d", &ano);

  if (mes == 2)
  {
    max_dias = 28;
  }
  else if (mes % 2 == 0)
  {
    max_dias = 30;
  }
  else
  {
    max_dias = 31;
  }

  if (mes > 12 || mes < 0)
  {
    printf("Mês inválido");
    return 0;
  }

  // Checagem do ano bissexto
  if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
  {
    max_dias = 29;
  }

  if (dia < 0 || dia > max_dias)
  {
    printf("Qtd dias inválidos\n");
    return 0;
  }

  printf("%02d/%02d/%04d\n", dia, mes, ano);

  return 0;
}
