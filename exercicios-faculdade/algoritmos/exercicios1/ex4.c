#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  int idade_em_dias, anos, dias, meses;

  printf("Digite sua idade em dias: ");
  scanf("%d", &idade_em_dias);

  anos = idade_em_dias / 365;
  meses = (idade_em_dias % 365) / 30;
  dias = (idade_em_dias % 365) % idade_em_dias % 30;

  printf("Você tem: %d anos, %d meses, %d dias", anos, meses, dias);

  return 0;
}
