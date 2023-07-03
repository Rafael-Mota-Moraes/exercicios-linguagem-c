/*
    Peça ao usuário para digitar tres valores inteiros e imprima a soma dos 3 números
*/

#include <stdio.h>

int main() {
    int n1, n2, n3;
    
    printf("Digite 3 numeros: ");

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    int soma = n1 + n2 + n3;

    printf("A soma dos 3 números é: %d\n", soma);

    return 0;
}

