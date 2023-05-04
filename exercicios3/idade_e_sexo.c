#include <stdio.h>

int main()
{
  int idade;
  char sexo;

  printf("Digite a idade: ");
  scanf("%d", &idade);

  printf("Digite o sexo: (M ou F) ");
  scanf("%c", &sexo);

  if (sexo == 'M' || sexo == 'F')
  {
    if (sexo == 'M' && idade > 65)
    {
      printf("Pode se aposentar");
    }
    else if (sexo == 'F' || idade > 65)
    {
      printf("Pode se aposentar");
    }
    else
    {
      printf("Não pode se aposentar");
    }
  }
  else
  {
    printf("Digite um sexo válido");
  }

  return 0;
}
