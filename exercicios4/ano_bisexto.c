#include <stdio.h>

int main() {
  int bisexto;

  for(int ano = 1900; ano <= 2023; ano++) {
    if(ano % 400 == 0 || ano % 4 == 0 &&  ano % 100 !=0) {
      printf("Bisexto: %d\n", ano);
    }
  } 

  return 0;
}
