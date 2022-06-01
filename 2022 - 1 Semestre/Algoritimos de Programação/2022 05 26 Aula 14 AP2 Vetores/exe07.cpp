// 7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima  o vetor, o maior elemento e a posição em que ele se encontra.
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int numero[10];
    int maior = 0;
    int i;
    int posicao;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número\n", i + 1);
        scanf("%d%*c", &numero[i]);
        if (maior < numero[i])
        {
            maior = numero[i];
            posicao = i + 1;
        }
    }
    printf("Foram digitados os seguintes valores:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%dº posição = %d\n", i + 1, numero[i]);
    }
    printf("O maior elemento = %d, %dº posição", maior, posicao);
    return 0;
}