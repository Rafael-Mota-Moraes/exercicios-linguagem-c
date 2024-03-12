#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int is_stack_empty(int topo)
{
    if (topo == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int *fila, int *index, int item)
{
    fila[*index] = item;
    (*index)++;
}

int pop(int *fila, int *topo)
{
    if (is_stack_empty(*topo))
    {
        printf("Lista está vazia");
        exit(EXIT_FAILURE);
    }
    else
    {
        (*topo)--;
        return fila[*topo];
    }
}

void mostra_fila(int *fila, int topo)
{
    for (int i = 0; i < topo; i++)
    {
        printf("%d ", fila[i]);
    }
}

int is_stack_full(int topo)
{
    if (topo == TAM)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int *fila = (int *)malloc(sizeof(int) * TAM);
    int topo = 0;

    push(fila, &topo, 1);
    push(fila, &topo, 2);
    push(fila, &topo, 3);
    push(fila, &topo, 4);

    printf("\nLISTA:\n");
    mostra_fila(fila, topo);

    if (is_stack_full(topo))
    {
        printf("\nLista está cheia.\n");
    }
    else
    {
        printf("\nLista NÃO está cheia.\n");
    }

    printf("%d ", pop(fila, &topo));
    printf("%d ", pop(fila, &topo));
    printf("%d ", pop(fila, &topo));
    printf("%d ", pop(fila, &topo));

    return 0;
}
