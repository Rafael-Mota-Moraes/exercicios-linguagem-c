#include <stdio.h>

/*
Booleanos (Verdadeiro/False) true/false

Na linguagem C, não existe um tipo de dado boolean

Mas...

A linguagem C reconhece o valor 0 como falso e qualquer valor diferente de 0 como verdadeiro.

*/

int main() {
    int booleano = 1;

    if(booleano) {
        printf("Verdadeiro");
    }else{
        printf("Falso");
    }
    
    return 0;
}
