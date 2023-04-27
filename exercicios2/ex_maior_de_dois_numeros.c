#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  int n1, n2;

  printf("N1: ");
  scanf("%d", &n1);

  printf("N2: ");
  scanf("%d", &n2);

  if(n1 > n2) {
    printf("N1 MAIOR");
    return 0;
  }

  printf("N2 Maior");

  return 0;
}

 