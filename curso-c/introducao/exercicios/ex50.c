/*
Implemente um programa que calcule o ano de nascimento a partir de sua idade atual.
*/

#include <stdio.h>

int main() {
  int ano_atual = 2023, idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  int ano_nascimento = ano_atual - idade;

  printf("Voce nasceu em %d", ano_nascimento);

  return 0;
}
