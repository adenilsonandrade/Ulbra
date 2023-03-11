/*
2 - Faca um programa que preencha um vetor com sete numeros inteiros, calcule e mostre:
- os numeros multiplos de 2;
- os numeros multiplos de 3;
- os numeros multiplos de 2 e 3;
*/
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int valor[6];
    int i = 0;
    int cont = 0;
    int cont2 = 0;
    int cont3 = 0;
    for (i = 0; i < 7; i++)
    {
        printf("Digite o %dº valor\n", i + 1);
        scanf("%d%*c", &valor[i]);
        if (valor[i] % 2 == 0)
        {
            cont2++;
        }
        if (valor[i] % 3 == 0)
        {
            cont3++;
        }
        if (valor[i] % 2 == 0 && valor[i] % 3 == 0)
        {
            cont++;
        }
    }
    printf("Foram digitados %d multiplos de 2, sao eles:\n", cont2);
    for (i = 0; i < 7; i++)
    {
        if (valor[i] % 2 == 0)
            printf("%d\n", valor[i]);
    }
    printf("Foram digitados %d multiplos de 3, sao eles:\n", cont3);
    for (i = 0; i < 7; i++)
    {
        if (valor[i] % 3 == 0)
            printf("%d\n", valor[i]);
    }
    printf("Foram digitados %d multiplos de 2 e de 3, sao eles:\n", cont);
    for (i = 0; i < 7; i++)
    {
        if (valor[i] % 2 == 0 && valor[i] % 3 == 0)
            printf("%d\n", valor[i]);
    }
    return 0;
}