#include <stdio.h>

/*
Tipos alfanuméricos
 - Characteres;
 - Strings*

 * Na linguagem C, não existe o tipo de dado String.
 
 */

int main() {
    char opcao;
    
    printf("Informe uma opçao: \n");
    printf("a - Saldo da conta. \n");
    printf("b - Extrato da conta. \n");
    printf("c - Limite da conta. \n");

    scanf("%c", &opcao);
    
    if(opcao == 'a') {
        printf("Seu saldo é...");
    } else if(opcao == 'b') {
        printf("Extrato da conta...");
    } else if(opcao == 'c') {
        printf("Seu limite é...");
    } else {
        printf("Desconhecida...");
    }

    // Gerar um alfabeto completo com um loop

    printf("\n");

    for(int i = 97; i <= 122; i++) {
        printf("%c ", i);
    }

    return 0;
}
