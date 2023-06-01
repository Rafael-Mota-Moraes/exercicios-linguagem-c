/*
Escreva um algoritmo para ler o número total de eleitores de
um município, e também o número de votos brancos, nulos e válidos.
Calcular e escrever o percentual que cada tipo de voto representa em
relação ao total de eleitores.
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  double validos, brancos, nulos, total;
  double porcentagen_validos, porcentagen_brancos, porcentagen_nulos;

  printf("Quantos votos válidos? ");
  scanf("%lf", &validos);

  printf("Quantos votos brancos? ");
  scanf("%lf", &brancos);

  printf("Quantos votos nulos? ");
  scanf("%lf", &nulos);

  total = validos + brancos + nulos;
  printf("O total de votos da cidade é: %lf\n", total);

  porcentagen_validos = validos / total * 100;
  porcentagen_brancos = brancos / total * 100;
  porcentagen_nulos = nulos / total * 100;
  
  printf("Porcentagem de votos válidos: %.2lf\n", porcentagen_validos);
  printf("Porcentagem de votos brancos: %.2lf\n", porcentagen_brancos);
  printf("Porcentagem de votos nulos: %.2lf\n", porcentagen_nulos);

  return 0;
}
