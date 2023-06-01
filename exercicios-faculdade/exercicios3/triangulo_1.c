#include <stdio.h>

int main() {
  double a, b, c;
 
  printf("Digite A:");
  scanf("%lf", &a);
  
  printf("Digite B:");
  scanf("%lf", &b);
  
  printf("Digite C:");
  scanf("%lf", &c);

  if(a < (b + c) && b <  (a + c) && c <  (a + b)) {
    printf("É um triângulo");
  } else {
    printf("Não é um triângulo");
  }

  return 0;
}