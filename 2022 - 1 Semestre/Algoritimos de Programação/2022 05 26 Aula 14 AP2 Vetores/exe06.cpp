// 6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior e o menor elemento do vetor.
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int valor[10];
    int i;
    int maior = 0, menor;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número\n", i + 1);
        scanf("%d%*c", &valor[i]);
        if (maior < valor[i])
            maior = valor[i];
        if (menor > valor[i])
            menor = valor[i];
    }
    printf("O maior número é %d\nO menor número é %d", maior, menor);

    return 0;
}