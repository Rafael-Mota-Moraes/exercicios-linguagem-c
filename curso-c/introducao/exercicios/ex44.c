/*
Receba a altura de um degrau de uma escada e a altra que o usuário deseja alcançar subindo a escada. Calcule mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
*/

#include <stdio.h>

int main() {
    double altura_degrau, tamanho_escada;

    printf("Digite a altura do degrau: ");
    scanf("%lf", &altura_degrau);

    printf("Digite a altura da escada: ");
    scanf("%lf", &tamanho_escada);

    printf("Você terá que subit %.2lf degraus.", (tamanho_escada / altura_degrau));

    return 0;
}