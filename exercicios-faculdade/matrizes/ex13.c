#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz_1[5][5];
    int matriz_2[5][5];
    int matriz_final[5][5] = {{0}};
    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz_1[i][j] = rand() % 5;
            matriz_2[i][j] = rand() % 5;
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%2d ", matriz_1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%2d ", matriz_2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            for(int k = 0; k < 5; k++) {
                matriz_final[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%2d ", matriz_final[i][j]);
        }
        printf("\n");
    }

    return 0;
}
