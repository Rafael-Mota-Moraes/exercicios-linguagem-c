#include <stdio.h>

union numeros{
    int num1, num2, num3, num4, num5;
}n;


int main() {

    n.num1 = 1;
    printf("O valor de num1 é %d\n", n.num1);
    n.num2 = 3;
    printf("O valor de num2 é %d\n", n.num2);
    n.num3 = 5;
    printf("O valor de num3 é %d\n", n.num3);
    n.num4 = 7;
    printf("O valor de num4 é %d\n", n.num4);
    n.num5 = 9;
    printf("O valor de num5 é %d\n", n.num5);

    printf("\n");

    printf("O valor de num1 é %d\n", n.num1);
    printf("O valor de num2 é %d\n", n.num2);
    printf("O valor de num3 é %d\n", n.num3);
    printf("O valor de num4 é %d\n", n.num4);
    printf("O valor de num5 é %d\n", n.num5);

    return 0;
}
