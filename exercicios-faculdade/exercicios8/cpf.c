#include <stdio.h>

int main()
{
    char cpf[15];
    int i, local_digito;
    int digitos[11];
    int multiplicador;
    int soma;

    printf("Digite o CPF (formato: XXX.XXX.XXX-XX): ");
    scanf("%14s", cpf);

    // Verifica se o CPF possui 14 caracteres (com pontos e traço)
    for (i = 0; i < 14; i++)
    {
        if (cpf[i] == '\0')
        {
            if (i != 14)
            {
                printf("CPF inválido!\n");
                return 0;
            }
            break;
        }
    }

    // Verifica se os caracteres nos índices corretos são pontos ou traço
    if (cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-')
    {
        printf("CPF inválido!\n");
        return 0;
    }

    // Extrai os dígitos numéricos do CPF
    local_digito = 0;
    for (i = 0; i < 14; i++)
    {
        if (cpf[i] >= '0' && cpf[i] <= '9')
        {
            digitos[local_digito] = cpf[i] - '0';
            local_digito++;
        }
    }

    // Verifica se todos os dígitos são iguais (CPF inválido)
    for (i = 1; i < 11; i++)
    {
        if (digitos[i] != digitos[0])
        {
            break;
        }
    }
    if (i == 11)
    {
        printf("CPF inválido!\n");
        return 0;
    }

    // Verifica o primeiro dígito verificador
    int resto = 0;
    multiplicador = 10;
    soma = 0;
    for (i = 0; i < 9; i++)
    {
        soma += digitos[i] * multiplicador;
        multiplicador--;
    }
    resto = soma % 11;
    if (resto < 2)
    {
        if (digitos[9] != 0)
        {
            printf("CPF inválido!\n");
            return 0;
        }
    }
    else
    {
        if (digitos[9] != 11 - resto)
        {
            printf("CPF inválido!\n");
            return 0;
        }
    }

    // Verifica o segundo dígito verificador
    multiplicador = 11;
    soma = 0;
    for (i = 0; i < 10; i++)
    {
        soma += digitos[i] * multiplicador;
        multiplicador--;
    }

    resto = soma % 11;

    if (resto < 2)
    {
        if (digitos[10] != 0)
        {
            printf("CPF inválido!\n");
            return 0;
        }
    }
    else
    {
        if (digitos[10] != 11 - resto)
        {
            printf("CPF inválido!\n");
            return 0;
        }
    }

    printf("CPF válido!\n");
    return 0;
}
