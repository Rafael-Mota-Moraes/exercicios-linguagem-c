#include <stdio.h>

int main() {
    
    int valores[5];

    for(int i = 0; i < 5; i++) {
        printf("Informe o %d/5 valor: ", (i + 1));
        scanf("%d", &valores[i]);
    }

    printf("Os valores informados foram: \n");

    for(int i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
        printf("%d\n", &valores[i]);
    }

    printf("%p", &valores);

    return 0;
}
