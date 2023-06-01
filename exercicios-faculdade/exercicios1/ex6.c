/*
Faça um algoritmo que receba uma temperatura em Celsius
e que converta para Fahrenheit e para Kelvin.
*/

#include <stdio.h>
#include <locale.h>

int main() {
  double celsius, kelvin, fahrenheit;

  setlocale(LC_ALL, "portuguese");

  printf("Digite a temperatura em celsius: ");
  scanf("%lf", &celsius);


  kelvin = celsius + 273;
  printf("Temperatura em Kelvin: %.2lf\n", kelvin);

  fahrenheit = 1.8 * celsius + 32;
  printf("Temperatura em Fahrenheit: %.2lf\n", fahrenheit);

  return 0;
}