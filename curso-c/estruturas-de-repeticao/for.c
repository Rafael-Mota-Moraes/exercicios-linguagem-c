#include <stdio.h>

// Estruturas de repetição (for)

int main() {
    // variáveis
    int numero, soma = 0;

    // para o int i iniciando em 0; enquanto i < 5; incremente o i em 1
    for(int i = 0; i < 5; i++) {
        // entrada
        printf("Informe um número: ");
        scanf("%d", &numero);

        // processamento
        soma = soma + numero;
    } 

    // saída
    printf("A soma é: %d\n", soma);

    return 0;
}
