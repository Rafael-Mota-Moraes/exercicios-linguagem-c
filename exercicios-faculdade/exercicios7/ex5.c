/*
CÓDIGO MORSE

Acesse o link abaixo e entenda do que se trata o Código Morse.
https://pt.wikipedia.org/wiki/C%C3%B3digo_Morse

Faça um algoritmo que leia uma palavra de no máximo 10 caracteres e
que escreva na tela a codificação Morse desta palavra.

Exemplo de palavra: BOLA
Exemplo codificado: -... --- .-.. .-
*/

#include <stdio.h> 
#include <string.h>

int main() {
  char palavra[10];

  printf("Digite a palavra: ");
  scanf("%s", palavra);

  int tamanho_palavra = strlen(palavra);

  for(int i = 0; i < tamanho_palavra; i++) {
    switch(palavra[i]) {
      case 'a':
        printf(".-");
        break;
      case 'b':
        printf("-...");
        break;
      case 'c':
        printf("-.-.");
        break;
      case 'e':
        printf(".");
        break;
      case 'f':
        printf("..-.");
        break;
      case 'g':
        printf("--.");
        break;
      case 'h':
        printf("....");
        break;
      case 'i':
        printf("..");
        break;
      case 'j':
        printf(".---");
        break;
      case 'k':
        printf("-.-");
        break;
      case 'l':
        printf(".-..");
        break;
      case 'm':
        printf("--");
        break;
      case 'n':
        printf("-.");
        break;
      case 'o':
        printf("---");
        break;
      case 'p':
        printf(".--.");
        break;
      case 'q':
        printf("--.-");
        break;
      case 'r':
        printf(".-.");
        break;
      case 's':
        printf("...");
        break;
      case 't':
        printf("-");
        break;
      case 'u':
        printf("..-");
        break;
      case 'v':
        printf("...-");
        break;
      case 'w':
        printf(".--");
        break;
      case 'x':
        printf("-..-");
        break;
      case 'y':
        printf("-.--");
        break;
      case 'z':
        printf("--..");
        break;
    }
    printf(" ");
  }
  printf("\n\n");
}
