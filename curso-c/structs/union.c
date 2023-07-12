#include <stdio.h>
#include <string.h>

// A union separa e utiliza apenas o espaço da maior variável

union pessoa {
    char nome[100]; // 1 char -> 1 * 100 = 100 bytes
    int idade; // 4 bytes -> total de 104 bytes
};

int main() {
    int numero = 42; // sizeof -> tamanho de
    float nota = 7.9;
    char letra = 'd';

    printf("A variável 'numero' tem valor %d e ocupa %ld bytes em memória\n", numero, sizeof(numero));

    printf("A variável 'nota' tem valor %f e ocupa %ld bytes em memória\n", nota, sizeof(nota));

    printf("A variável 'letra' tem valor %c e ocupa %ld bytes em memória\n", letra, sizeof(letra));

    printf("\n\n");

    union pessoa pes;

    strcpy(pes.nome, "Angelina Jolie");
    printf("Dados de %s\n", pes.nome);
    
    pes.idade = 39;
    printf("Ela tem %d anos de idade\n", pes.idade);

    printf("A variável 'pes' está ocupando %ld bytes em memória.", sizeof(pes));

    return 0;
}
