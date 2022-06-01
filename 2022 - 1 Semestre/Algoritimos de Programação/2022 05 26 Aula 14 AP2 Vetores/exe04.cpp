// 4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições  X e Y .
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int a[7];
    int i, x=0, y=0;
    float soma=0;
    for (i = 0; i < 8; i++)
    {
        printf("Digite %dº posição vetor a\n", i + 1);
        scanf("%d%*c", &a);
    }
    for (i = 0; i < 2; i++)
    {
        printf("Escolha uma posição de 1 a 8");
        scanf("%d%*c", &a[i]);
        soma = x + y;
        printf("Soma de X e Y = %.0f", soma);
    }
    return 0;
}