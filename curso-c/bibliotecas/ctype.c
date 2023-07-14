#include <stdio.h>
#include <ctype.h>

// TESTE DE TIPOS DE CARACTERES 

/*
isalnum(); // Verifica se o caractere é alfanumérico
isalpha(); // Verifica se o caractere é alfabetico
isdigit(); // Verifica se o caractere é um digito decimal
ispunct(); // Verifica se o caractere é uma pontuação
isspace(); // Verifica se é um espaço
isupper(); // Verifica se o caractere é maiúscula
tolower(); // Converte caractere para minúsculo
*/

int main() {
    char teste = '4';

    if(isalnum(teste)) {
        printf("É alfanumérico\n");
    } else {
        printf("Não é alfanumérico\n");
    }

    char letra = 'A';
    printf("%c\n", tolower(letra));

    return 0;
}
