/*
Escreva um programa em C que leia as medidas dos lados de um triângulo e escreva se ele é:
EQUILÁTERO, ISÓSCELES ou ESCALENO.
Observação:
• Triângulo equilátero: Possui os 3 lados iguais.
• Triângulo isósceles: Possui 2 lados iguais.
• Triângulo escaleno: Possui 3 lados diferentes.
*/

int main()
{
    int lado_1, lado_2, lado_3;

    printf("Digite o valor do lado 1: ");
    scanf("%d", &lado_1);

    printf("Digite o valor do lado 2: ");
    scanf("%d", &lado_2);

    printf("Digite o valor do lado 3: ");
    scanf("%d", &lado_3);

    if (lado_1 == lado_2 && lado_2 == lado_3)
    {
        printf("Triângulo equilátero\n");

        return 0;
    }

    if (lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3)
    {
        printf("Triângulo isósceles\n");
        return 0;
    }

    if (lado_1 != lado_2 && lado_1 != lado_3 && lado_2 != lado_3)
    {
        printf("Triângulo escaleno\n");
        return 0;
    }

    return 0;
}
