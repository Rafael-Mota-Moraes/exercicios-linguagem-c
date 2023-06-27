#include <stdio.h>
#include <string.h>

int main() {
	char string[50];
	
	printf("Digite sua frase: ");
	fgets(string, sizeof(string), stdin);
	
	int tamanho_string = strlen(string) - 1;
	int numero_de_letras_da_ultima_palavra = 0;
	
	for (int i = tamanho_string - 1; i >= 0; i--) {
		if (string[i] == ' ') {
			break;
		}
		numero_de_letras_da_ultima_palavra++;
	}
	
	printf("Tamanho da última palavra: %d\n", numero_de_letras_da_ultima_palavra);
	
	return 0;
}
