#include <stdio.h>

/*
    Funções - escrevendo funções
    - tipo de retorno
    - nome
    - parâmetros de entrada (opcional)
    - implementação
    - retorno (opcional)
*/

void mensagem() {
    printf("Olá mundo\n");
}

int soma(int n1, int n2) {
    return n1 + n2;
}

int main() {
    mensagem();


    printf("%d\n", soma(2, 3));

    return 0;
}
