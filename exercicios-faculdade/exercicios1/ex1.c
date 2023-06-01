/* Exercício média ponderada */
#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");

  double nota1, nota2, peso_nota_1, peso_nota_2, media_ponderada;
  printf("Digite a 1� nota: ");
  scanf("%lf", &nota1);

  printf("Digite o peso 1� nota: ");
  scanf("%lf", &peso_nota_1);

  printf("Digite a 2� nota: ");
  scanf("%lf", &nota2);

  printf("Digite o peso 2� nota: ");
  scanf("%lf", &peso_nota_2);

  media_ponderada = (peso_nota_1 * nota1 + peso_nota_2 * nota2) / (peso_nota_1 + peso_nota_2);

  printf("A m�dia ponderada �: %.2lf", media_ponderada);

  return 0;
}

