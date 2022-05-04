#include <stdio.h>
/*
Exercio 4)
Faca um programa que receba tres numeros e mostre em ordem crescente. Suponha que o usuario
digitara tres numeros diferentes
*/
int main()
{
    float n1, n2, n3;
    printf("Digite o numero 1\n");
    scanf("%f%*c", &n1);
    printf("Digite o numero 2\n");
    scanf("%f%*c", &n2);
    printf("Digite o numero 3\n");
    scanf("%f%*c", &n3);
    if (n1 < n2 && n2 < n3)
    {
        printf("1 A ordem crescente e: n1, %.0f, n2, %.0f, n3, %.0f\n", n1, n2, n3);
    }
    else if (n1 < n3 && n3 < n2)
    {
        printf("2 A ordem crescente e: n1, %.0f, n3, %.0f, n2, %.0f\n", n1, n3, n2);
    }
    else if (n2 < n3 && n3 < n1)
    {
        printf("3 A ordem crescente e: n2, %.0f, n3, %.0f, n1, %.0f\n", n2, n3, n1);
    }
    else if (n2 < n1 && n1 < n3)
    {
        printf("4 A ordem crescente e: n2, %.0f, n1, %.0f, n3, %.0f\n", n2, n1, n3);
    }
    else if (n3 < n1 && n1 < n2)
    {
        printf("5 A ordem crescente e: n3, %.0f, n1, %.0f, n2, %.0f\n", n3, n1, n2);
    }
    else if (n3 < n2 && n2 < n1)
    {
        printf("6 A ordem crescente e: n3, %.0f, n2, %.0f, n1, %.0f\n", n3, n2, n1);
    }
    else
        printf("Dados inseridos incorretamente\n");
    return 0;
}