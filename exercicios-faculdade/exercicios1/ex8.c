/*
Desenvolva um algoritmo que leia via teclado o di�metro de
uma circunfer�ncia e que escreva na tela o per�metro e a �rea desta
circunfer�ncia.
*/
#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  double diametro, PI, perimetro, area, raio;
  PI = 3.14;

  printf("Di�metro da circunfer�ncia: ");
  scanf("%lf", &diametro);
  raio = diametro / 2;

  perimetro = 2 * PI * raio;
  area = PI * (raio * raio);

  printf("Perimetro da circunfer�ncia: %.2lf\n", perimetro);
  printf("Area da circunfer�ncia: %.2lf\n", area);

  return 0;
}
