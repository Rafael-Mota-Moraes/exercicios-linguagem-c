#include <stdio.h>

int main(int argc, char const *argv[]) {
  int peso;
  double altura, imc;

  printf("Digite sua altura (metros): ");
  scanf("%lf", &altura);

  printf("Digite seu peso (Kg): ");
  scanf("%d", &peso);

  imc = peso / (altura * altura);

  if(imc < 18.5) {
    printf("Abaixo do peso");
  } else if (imc > 18.5 && imc <= 25) {
    printf("Peso normal");
  } else if (imc > 25 && imc <= 30) {
    printf("Sobrepeso");
  } else if (imc > 30 && imc <= 35) {
    printf("Obesidade grau I");
  } else if (imc > 35 && imc <= 40) {
    printf("Obesidade grau II");
  } else if (imc > 40) {
    printf("Obesidade grau III");
  }

  return 0;
}
