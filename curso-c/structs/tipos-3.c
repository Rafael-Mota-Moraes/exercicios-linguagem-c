#include <stdio.h>
#include <string.h>

// Struct -> estrutura

struct st_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}alunos[2];

int main() {

    for(int i = 0; i < 2; i++) {

        printf("Informe a matricula do aluno: ");
        fgets(alunos[i].matricula, 10, stdin);

        printf("Informe o nome do aluno: ");
        fgets(alunos[i].nome, 100, stdin);

        printf("Informe curso do aluno: ");
        fgets(alunos[i].curso, 10, stdin);

        printf("Informe ano de nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);
        getchar();

    }

    for(int i = 0; i < 2; i++) {
        printf("DADOS DO ALUNO\n");

        printf("Matrícula: %s\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Ano de nascimento: %d\n", alunos[i].ano_nascimento);
    }



    return 0;
}
