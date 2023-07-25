#include <stdio.h>

int main() {
  double a, b, c;
 
  printf("Digite A:");
  scanf("%lf", &a);
  
  printf("Digite B:");
  scanf("%lf", &b);
  
  printf("Digite C:");
  scanf("%lf", &c);

  if(a > b + c || b > a + c || c > a + b) {
    printf("Não é um triângulo");
  } else {
    printf("É um triângulo");
  }

  return 0;
}