#include <stdio.h>

/*

Operações Matemáticas

somar +
subtrair -
multiplicar *
dividir /
módulo %

*/

int main() {
    int num1, num2;
    float resultado;

    printf("Informe o num1: ");
    scanf("%d", &num1);

    printf("Informe o num2: ");
    scanf("%d", &num2);

    // soma
    resultado = num1 + num2;
    printf("A soma é %f\n", resultado);

    // subtrair
    resultado = num1 - num2;
    printf("A subtração é %f\n", resultado);

    // multiplicar
    resultado = num1 * num2;
    printf("A multiplicação é %f\n", resultado);

    // dividir
    resultado = (float)num1 / (float)num2;
    printf("A divisão é %f\n", resultado);

    // módulo
    resultado = num1 % num2;
    printf("O módulo é %f\n", resultado);

    return 0;
}