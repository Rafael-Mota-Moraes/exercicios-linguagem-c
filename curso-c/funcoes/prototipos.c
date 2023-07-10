#include <stdio.h>


/*
Protótipo da função

Assinatura das funções

- Tipo de retorno
- nome
- parâmetros de entrada

*/
int soma(int num1, int num2);

int main() {
    int n1, n2, resultado;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    resultado = soma(n1, n2);

    printf("O resultado foi: %d\n", resultado);

    return 0;
}

int soma(int num1, int num2) {
    return num1 + num2;
}
