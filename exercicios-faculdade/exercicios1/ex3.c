/**
Faça um algoritmo que leia a idade de uma pessoa em anos,
meses e dias e escreva a idade dessa pessoa apenas em dias.
Obs.: Considere que todos anos e meses possuem 365 e 30 dias,
respectivamente.
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  int anos, dias, meses, idade_em_dias;

  printf("Quantos anos você tem? ");
  scanf("%d", &anos);

  printf("Quantos meses você tem? ");
  scanf("%d", &meses);

  printf("Quantos dias você tem? ");
  scanf("%d", &dias);

  idade_em_dias = anos * 365 + meses * 30 + dias;

  printf("Você tem %d dias vividos.", idade_em_dias);

  return 0;
}
