#include <stdio.h>

// While

int main() {
    int numero, soma = 0;

    // Entrada
    printf("Informe um número: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma = soma + numero;
        
        printf("Informe um número: ");
        scanf("%d", &numero);
    }
    
    printf("A soma é: %d", soma);

    return 0;
}