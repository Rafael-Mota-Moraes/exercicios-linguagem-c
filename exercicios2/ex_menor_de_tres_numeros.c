#include <stdio.h>

int main(int argc, char const *argv[])
{

  int n1, n2, n3, menor, meio, maior;

  printf("N1: ");
  scanf("%d", &n1);

  printf("N2: ");
  scanf("%d", &n2);

  printf("N3: ");
  scanf("%d", &n3);

  if(n1 < n2 && n1 < n3) {
    menor = n1;
    if(n2 < n3) {
      meio = n2;
      maior = n3;
    } else {
      meio = n3;
      maior = n2;
    }
  }

  if(n2 < n1 && n2 < n3) {
    menor = n2;
    if(n1 < n3) {
      meio = n1;
      maior = n3;
    } else {
      meio = n3;
      maior = n1;
    }
  }

  if(n3 < n1 && n3 < n2) {
    menor = n3;
    
    if(n1 < n2) {
      meio = n1;
      maior = n2;
    } else {
      meio = n2; 
      maior = n1;
    }
  }

  printf("%d %d %d", menor, meio, maior);

  return 0;
}
