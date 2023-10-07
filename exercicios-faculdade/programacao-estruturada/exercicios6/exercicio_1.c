#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * valores_entre(int *v, int n, int min, int max, int *qtd)
{
	int i,x=0;
	int *v_n;
		
	// Descobrir quantos elementos estao entre o min e o max
	for (i=0;i<n;i++)
	    if (v[i] >= min && v[i]<= max)
	       (*qtd)++;
	       
	// Criar um vetor com o tamanho de *qtd
	v_n = (int*)(malloc( (*qtd) * sizeof(int)));

	// Preenchendo o novo vetor com os valores que estao entre o min e o max
	for (i=0;i<n;i++)
	    if (v[i] >= min && v[i]<= max)
	    {
			v_n[x] = v[i];
			x++;
		}
		
     return v_n;
	
}
int main()
{
	int tamanho, i, min, max;
	int *vetor, *vetor_entre;
	int qtd=0;
	
	printf ("Informe o tamanho do vetor a ser criado: ");
	scanf ("%d", &tamanho);
	
	// Cria o vetor dinamicamente
	vetor = (int*)(malloc(tamanho*sizeof(int)));
	
	// inicializar a geracao de nros randomicos	
	srand(time(NULL));
	
	// Preenche o vetor com valores aleatorios;
	for (i=0;i<tamanho;i++)
	    {
	    vetor[i] = rand()%500;
        printf ("%d ", vetor[i]);
	    }
	    
	printf ("Informe o valor minimo e o valor maximo: ");
	scanf ("%d %d", &min, &max);
	
	vetor_entre = valores_entre(vetor, tamanho, min, max, &qtd);

    printf ("\nAchei %d elementos entre %d e %d\n", qtd, min,max);
    
	for (i=0;i<qtd;i++)
	    {
        printf ("%d ", vetor_entre[i]);
	    }
    free(vetor);
    free(vetor_entre);
}