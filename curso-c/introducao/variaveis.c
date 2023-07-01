#include <stdio.h>

int main() { // A chave delimita um bloco de código, aqui se inicia um bloco
    // declarando variáveis
    int idade; // variável do tipo inteiro

    //declarando e inicializando variaveis
    // int idade = 0;

    // Escreve algo na saída padrão (console)
    printf("Qual é a sua idade? "); // o ; finaliza um comando
    
    // recebendo dados do usuário.
    scanf("%d", &idade);

    printf("A sua idade é %d \n", idade);

    return 0;
} // Aqui termina o bloco de código