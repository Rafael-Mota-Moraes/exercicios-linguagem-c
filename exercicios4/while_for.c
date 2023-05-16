#include <stdio.h>

int main() {
  int i = 0;
  
  while(i <= 50) {
    printf("%d ", i);
    i++;
  }

  printf("\n-------------------------\n");

  for(int j = 0; j <= 50; j++) {
    printf("%d ", j);
  }

  return 0;
}
