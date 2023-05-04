#include <stdio.h>

int main() {
  int idade;
  double altura_em_metros;
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Agora digite sua altura (em metros): ");
  scanf("%lf", &altura_em_metros);

  int pode_brincar = idade >= 18 && altura_em_metros >= 1.7;

  if(pode_brincar) {
    printf("Pode entrar no brinquedo");
  } else {
    printf("Não pode brincar");
  }

  return 0;
}