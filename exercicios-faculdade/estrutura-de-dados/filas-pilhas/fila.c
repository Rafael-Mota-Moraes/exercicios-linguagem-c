#include <stdio.h>
#include <stdlib.h>

// Structs
struct Fila
{
    int ini;
    int fim;
    int tam;
    char *vetor;
};

// Protótipos
int is_empty(struct Fila *f);
int is_full(struct Fila *f);
void enqueue(struct Fila *f, char dado);
char dequeue(struct Fila *f);

int main()
{
    struct Fila f1 = {0, 0, 6, NULL};
    f1.vetor = (char *)malloc(f1.tam * sizeof(char));
    if (!f1.vetor)
        exit(-1);

    struct Fila f2 = {0, 0, 50, NULL};
    f2.vetor = (char *)malloc(f2.tam * sizeof(char));
    if (!f2.vetor)
        exit(-1);

    enqueue(&f1, 'A');
    enqueue(&f1, 'B');
    enqueue(&f1, 'C');
    enqueue(&f1, 'D');
    enqueue(&f1, 'E');

    for (int i = 0; i < 5; i++)
        enqueue(&f2, dequeue(&f1));

    for (int i = 0; i < 5; i++)
        printf("%c", dequeue(&f2));

    exit(EXIT_SUCCESS);
}

inline int is_empty(struct Fila *f)
{
    return f->ini == f->fim;
}

inline int is_full(struct Fila *f)
{
    return f->fim == f->ini - 1 || f->ini == 0 && f->fim == f->tam - 1;
}

void enqueue(struct Fila *f, char dado)
{
    if (is_full(f))
    {
        exit(-2);
    }
    else
    {
        f->vetor[f->fim] = dado;

        if (f->fim == f->tam - 1)
            f->fim = 0;
        else
            f->fim++;
    }
}

char dequeue(struct Fila *f)
{
    if (is_empty(f))
    {
        exit(-3);
    }
    else
    {
        char aux = f->vetor[f->ini];

        if (f->ini == f->tam - 1)
            f->ini = 0;
        else
            f->ini++;

        return aux;
    }
}