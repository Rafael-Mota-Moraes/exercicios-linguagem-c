#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  int n1, n2, n3;

  printf("N1: ");
  scanf("%d", &n1);

  printf("N2: ");
  scanf("%d", &n2);

  printf("N3: ");
  scanf("%d", &n3);

  if(n1 > n3 && n2 > n3) {
    printf("Menor n° é: %d \n", n3);
  }

  if(n3 > n2 && n1 > n2) {
    printf("Menor n° é: %d \n", n2);
  }

  if(n2 > n1 && n3 > n1) {
    printf("Menor n° é: %d \n", n1);
  }


  return 0;
}

 