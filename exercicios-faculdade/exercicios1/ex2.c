/* Exercício média harmônica */

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  double nota_1, nota_2, nota_3,  media_harmonica, divisor;


  printf("Digite a primeira nota: ");
  scanf("%lf", &nota_1);

  printf("Digite a segunda nota: ");
  scanf("%lf", &nota_2);

  printf("Digite a terceira nota: ");
  scanf("%lf", &nota_3);

  divisor = (1 / nota_1 + 1 / nota_2 + 1 / nota_3);
  media_harmonica = 3 / divisor;

  printf("A média harmônica das 3 notas é: %.1f", media_harmonica);

  return 0;
}