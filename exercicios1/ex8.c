/*
Desenvolva um algoritmo que leia via teclado o diâmetro de
uma circunferência e que escreva na tela o perímetro e a área desta
circunferência.
*/
#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  double diametro, PI, perimetro, area, raio;
  PI = 3.14;

  printf("Diâmetro da circunferência: ");
  scanf("%lf", &diametro);
  raio = diametro / 2;

  perimetro = 2 * PI * raio;
  area = PI * (raio * raio);

  printf("Perimetro da circunferência: %.2lf\n", perimetro);
  printf("Area da circunferência: %.2lf\n", area);

  return 0;
}
