#include <stdio.h>

int main() {
    int valores[5] = {1, 2, 3, 4, 5};
    
    for(int i = 0; i < 5; i++) {
        printf("O valor %d tem %ld bytes \n", valores[i], sizeof(valores[i]));
    }

    printf("O array tem %ld bytes\n", sizeof(valores));
    printf("valores[0] vale %d e o endereco de memória é %p\n", valores[0], valores[0]);

    printf("*(valores) vale %d e o endereco de memória é %p\n", *(valores), *(valores));

    printf("*(valores + 1) vale %d e o endereco de memória é %p\n", *(valores + 1), *(valores + 1));

    return 0;
}
