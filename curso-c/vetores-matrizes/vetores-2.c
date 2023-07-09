#include <stdio.h>

int main() {

    // vetores de inteiros 
    int numeros[3];

    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;

    // vetores de reais
    float valores[5];

    valores[0] = 1.4;
    valores[1] = 3.3;
    valores[2] = 5.98;
    valores[3] = 7.34;
    valores[4] = 9.09;


    for(int i = 0; i < 5; i++) {
        printf("%i ", numeros[i]);
        printf("%f ", valores[i]);
    }

    return 0;
}

