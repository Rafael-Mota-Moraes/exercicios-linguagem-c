#include <stdio.h>
#include <math.h>

/*
Funções matemáticas

Funções trigonométricas
cos(); // calcula o cosseno de um ângulo em radianos.
sin(); // calcula o seno de um ângulo em radianos.

Funções exponenciais e logarítmicas
exp(); // função exponenncial
log(); // logaritmo natural
log10(); // logaritmo base 10

Funções de potencia
pow(); // retorna a base elevada a potência

OBS. para compilar usar:
gcc nome_do_fonte.c -o nome_do_executavel -lm 
*/

int main() {
    // Funções trigonométricas
    int angulo = 45;
    float res = cos(angulo);

    printf("O cosseno de %d é %f\n", angulo, res);

    printf("\n\n");

    // Funções exponenciais e logarítmicas
    double a = 0, b = 1, c = 2;

    printf("O exponencial de %lf é %lf \n", a, exp(a));
    printf("O exponencial de %lf é %lf \n", b, exp(b));
    printf("O exponencial de %lf é %lf \n", c, exp(c));

    int valor = 42;

    printf("O log de %d é %lf\n", valor, log(valor));
    printf("O log base 10 de %d é %lf\n", valor, log10(valor));

    // Funções de potencia

    int a1 = 3, b1 = 2;
    printf("%d elevado a %d é %lf\n", a1, b1, pow(a1, b1));

    // raiz quadrada
    printf("%lf é a raiz quadrada de 9", sqrt(9));

    return 0;
}
