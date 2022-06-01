//8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ na ordem inversa.
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int numero[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %dº número\n", i+1);
        scanf("%d%*c", &numero[i]);
    }
    printf("Foram digitados os seguintes valores:\n");
    for (i = 5; i >= 0; i--)
    {
        printf("%dº posição = %d\n", i+1, numero[i]);
    }
    return 0;
}