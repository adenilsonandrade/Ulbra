#include <stdio.h>
/*
Exercicio 3 Pag.
Faca um programa que receba dois numeros e mostre o maior.
*/

int main()
{
    float n1, n2;
    printf("Digite o numero 1\n");
    scanf("%f%*c", &n1);
    printf("Digite o numero 2\n");
    scanf("%f%*c", &n2);
    if (n1 > n2)
    {
        printf("O maior numero e %.0f\n", n1);
    }
    else if (n2 > n1)
    {
        printf("O maior numero e %.0f\n", n2);
    }
    else if (n2 == n1)
    {
        printf("Os numero sao iguais\n");
    }
    else
    {
        printf("Dados invalidos");
    }
    return 0;
}