#include <stdio.h>

int main() {
  double n1, n2, n3;

  printf("Digite 3 números: \n");
  scanf("%lf", &n1);
  scanf("%lf", &n2);
  scanf("%lf", &n3);

  if(n1 >= 0 || n2 >= 0 || n3 >= 0) {
    printf("Pelo menos algum dos números é positivo!");
  } else {
    printf("Nenhum número é positivo");
  }

  return 0;
}
