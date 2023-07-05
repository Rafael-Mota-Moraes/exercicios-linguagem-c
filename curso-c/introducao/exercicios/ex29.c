/*
    Leia quatro notas e calcule a média delas
*/

#include <stdio.h>

int main() {
    double n1, n2, n3, n4;

    printf("Digite a 1° nota: ");
    scanf("%lf", &n1);

    printf("Digite a 2° nota: ");
    scanf("%lf", &n2);

    printf("Digite a 3° nota: ");
    scanf("%lf", &n3);
    
    printf("Digite a 4° nota: ");
    scanf("%lf", &n4);
    
    double media = (n1 + n2 + n3 + n4) / 4;

    printf("A média foi: %lf", media);

    return 0;
}