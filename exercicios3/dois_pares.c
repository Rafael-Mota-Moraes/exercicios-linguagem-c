#include <stdio.h>

int main() {
  int n1, n2;
  printf("Digite 2 números: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  
  if(n1 % 2 == 0 && n2 % 2 == 0){ 
    printf("Os dois números são pares");
  }else{
    printf("Algum ou os 2 númeos são impares"); 
  }

  return 0;
}
