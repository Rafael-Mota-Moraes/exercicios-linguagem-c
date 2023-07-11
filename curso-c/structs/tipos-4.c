#include <stdio.h>
#include <string.h>

// Struct -> estrutura

struct st_contato {
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[200];
}alunos[2];

struct st_agenda {
    struct st_contato contatos[100];
}agenda;


int main() {

    for(int i = 0; i < 2; i++) {

        printf("Informe o nome: ");
        scanf("%s", agenda.contatos[i].nome);
        getchar();

        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();


        printf("Informe o telefone: ");
        scanf("%s", agenda.contatos[i].telefone);
        getchar();

        printf("Informe o email: ");
        scanf("%s", agenda.contatos[i].email);
        getchar();
    }

    for(int i = 0; i < 2; i++) {
        printf("%s\n", agenda.contatos[i].nome);
        printf("%s\n", agenda.contatos[i].telefone);
    }



    return 0;
}
