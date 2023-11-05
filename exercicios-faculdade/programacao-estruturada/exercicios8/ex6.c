/*
O código de César
́
é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto
́
é substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso
desse Código de César (3 posições), entre com uma string e retorne a string codificada.
Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "a ligeira raposa marrom saltou sobre o cachorro cansado";
    int tamanho = strlen(str);

    char nova_str[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        if (str[i] != ' ')
        {
            nova_str[i] = str[i] + 3;
        }
        else
        {
            nova_str[i] = ' ';
        }
    }

    puts(nova_str);

    return 0;
}