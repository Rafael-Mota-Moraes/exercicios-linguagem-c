/*
Escreva um algoritmo para ler o n�mero total de eleitores de
um munic�pio, e tamb�m o n�mero de votos brancos, nulos e v�lidos.
Calcular e escrever o percentual que cada tipo de voto representa em
rela��o ao total de eleitores.
*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  double validos, brancos, nulos, total;
  double porcentagen_validos, porcentagen_brancos, porcentagen_nulos;

  printf("Quantos votos v�lidos? ");
  scanf("%lf", &validos);

  printf("Quantos votos brancos? ");
  scanf("%lf", &brancos);

  printf("Quantos votos nulos? ");
  scanf("%lf", &nulos);

  total = validos + brancos + nulos;
  printf("O total de votos da cidade �: %lf\n", total);

  porcentagen_validos = validos / total * 100;
  porcentagen_brancos = brancos / total * 100;
  porcentagen_nulos = nulos / total * 100;
  
  printf("Porcentagem de votos v�lidos: %.2lf\n", porcentagen_validos);
  printf("Porcentagem de votos brancos: %.2lf\n", porcentagen_brancos);
  printf("Porcentagem de votos nulos: %.2lf\n", porcentagen_nulos);

  return 0;
}
