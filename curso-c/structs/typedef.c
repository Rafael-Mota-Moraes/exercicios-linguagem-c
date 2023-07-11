#include <stdio.h>

// typedef - redefinir tipos

int main() {

    typedef float nota;

    // declarado variáveis
    nota prova1 = 7.0;
    nota prova2 = 6.55;

    nota soma = prova1 + prova2;

    printf("A soma das notas é: %f", soma);

    return 0;
}
