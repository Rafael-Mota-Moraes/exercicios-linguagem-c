#include <stdio.h>

/*
Switch

- Usamos o switch em caso onde tenhamos uma estrutura grande ou confusa de if/else/else if
*/

int main() {
    int valor;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    switch (valor){
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sábado");
        break;
    default:
        printf("Valor inválido.");
        break;
    }

}
