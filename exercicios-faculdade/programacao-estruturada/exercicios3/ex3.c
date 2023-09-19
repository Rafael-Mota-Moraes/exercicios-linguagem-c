/*
Usando como base o programa do slide (39,.r), modifique o programa para que ele faça o
seguinte:

• Criar uma variável do tipo “inteiro”, sendo ela int.
• Criar um comando “receba” (scanf).
• Modificar o comando diga para que ele mostre um valor inteiro.
*/

#include <stdio.h>

#define programa int main()
#define inicio {
#define fim }
#define diga printf
#define receba scanf

programa
    inicio int numero = 0;
diga("Digite um número: ");
receba("%d", &numero);
diga("Olá!\n");
diga("Número: %d\n", numero);
fim
