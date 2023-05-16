#include <stdio.h>

int main() {
  printf("Pares: \n");
  for(int i = 0; i <= 100; i++) {
    if(i % 2 == 0) {
      printf("%d ", i);
    }
  }
  printf("\nImpares: \n");

  for(int i = 0; i <= 100; i++) {
    if(i % 2 != 0) {
      printf("%d ", i);
    }
  }

  return 0;
}
