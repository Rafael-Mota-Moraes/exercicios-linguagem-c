/*
    Leia um valor de massa em libras e o apresente convertido para kilogramas
*/

#include <stdio.h>

int main() {
    double K, L;

    printf("Digite o peso em libras: ");
    scanf("%lf", &L);

    K = L * 0.45;

    printf("O peso convertido para kilogramas é : %lf", K);

    return 0;
}