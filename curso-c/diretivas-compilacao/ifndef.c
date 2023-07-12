#include <stdio.h>

// ifndef - diretiva de compilação

#ifndef PI
    #define PI 3.14567 // constante
#endif

int main() {
    int valor = 5;

    printf("O valor é %d\n", valor);
    printf("PI vale %f\n", (2 * PI));

    return 0;
}
