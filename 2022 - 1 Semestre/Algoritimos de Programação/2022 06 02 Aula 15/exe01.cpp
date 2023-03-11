/*
1 - Faca um programa que preencha um vetor com seis elementos numericos inteiros, calcule e mostre:
- todos os numeros pares;
- a quantidade de numeros pares;
- todos os numeros impares;
- a quantidade de numeros impares;
*/
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int valor[6];
    int i = 0;
    int contPar = 0;
    int contImpar = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %dº valor\n", i + 1);
        scanf("%d%*c", &valor[i]);
        if (valor[i] % 2 == 0)
        {
            contPar++;
        }
        if (valor[i] % 2 != 0)
        {
            contImpar++;
        }
    }
    printf("Foram digitados %d pares, sao eles:\n", contPar);
    for(i = 0; i < 6; i++)
    {
        if (valor[i] % 2 == 0)
        printf("%d\n", valor[i]);
    }
    printf("Foram digitados %d impares, sao eles:\n", contImpar);
    for(i = 0; i < 6; i++)
    {
        if (valor[i] % 2 != 0)
        printf("%d\n", valor[i]);
    }
    return 0;
}