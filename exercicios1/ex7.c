/*
Faça um algoritmo que receba uma temperatura em
Fahrenheit e que converta para Celsius e Kelvin.
*/

#include <stdio.h>
#include <locale.h>

int main() {
  double celsius, kelvin, fahrenheit;

  setlocale(LC_ALL, "portuguese");

  printf("Digite a temperatura em Fahrenheit: ");
  scanf("%lf", &fahrenheit);

  celsius = (fahrenheit - 32) / 1.8;
  kelvin = celsius + 273;

  printf("Temperaturam em celsius: %.2lf\n", celsius);
  printf("Temperaturam em kelvin: %.2lf\n", kelvin);

  return 0;
}