#include <stdio.h>

int main() {
    int numero, soma = 0;

    do {
        soma = soma + numero;
        
        printf("Informe um número: ");
        scanf("%d", &numero);
    } while(numero != 0);

    printf("A soma é: %d", soma);

    return 0;
}
