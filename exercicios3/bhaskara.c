#include <stdio.h>
#include <math.h>

// Adicionar flag -lm na hora de compilar

int main() { 
  double a, b, c;
 
  printf("Digite A:");
  scanf("%lf", &a);
  
  printf("Digite B:");
  scanf("%lf", &b);
  
  printf("Digite C:");
  scanf("%lf", &c);

  double delta;

  delta = (b * b) - 4 * a * c;

  if(delta < 0) {
    printf("Delta negativo\n");

    return 0;
  }

  double x;

  if(delta == 0) {
    x = -b / (2 * a);
    printf("Delta é igual a zero, X = %lf\n", x);
    return 0;
  }

  double raiz_quadrada_do_delta;
  double x1, x2;

  raiz_quadrada_do_delta = sqrt(delta);

  x1 = (-b + raiz_quadrada_do_delta) / (2 * a);
  x2 = (-b - raiz_quadrada_do_delta) / (2 * a);

  printf("X1=%.2lf X2=%.2lf", x1, x2);

  return 0;
}