#include <stdio.h>

int main() {
    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("arquivo.txt", "r");

    if(arq) {
        
        while(!feof(arq)) { // feof = file end of file
            resultado = fgets(nome, 10, arq);

            printf("Resultado: %d\n", resultado);

            if(resultado) {
                printf("%s\n", nome);
            }
        }

    } else {
        printf("Não achou o arquivo");
    }

    fclose(arq);

    return 0;
}
