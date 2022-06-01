// 2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int valor[5];
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("Digite %dº posição vetor valor\n", i + 1);
        scanf("%d%*c", &valor[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        printf("Vetor valor %dº posição = %d\n", i + 1, valor[i]);
    }
    return 0;
}