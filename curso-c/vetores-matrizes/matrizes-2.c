#include <stdio.h>

int main() {
    
    int numeros[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            numeros[i][j] = i + j;
            printf("%i ", numeros[i][j]);
        }

        printf("\n");
    }


    return 0;
}