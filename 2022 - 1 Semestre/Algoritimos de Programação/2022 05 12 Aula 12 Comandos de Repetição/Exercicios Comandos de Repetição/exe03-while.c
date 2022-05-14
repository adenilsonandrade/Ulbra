#include <stdio.h>
/*
Efetue um programa que mostre todos os números inteiros ímpares situados numa  faixa de dois números digitados pelo usuário. Esse algoritmo deve ser feito duas vezes uma usando o WHILE e DO-WHILE
*/
int main()
{
    int n1, n2, i;
    printf("Digite o primeiro numero\n");
    scanf("%d%*c", &n1);
    printf("Digite o segundo numero\n");
    scanf("%d%*c", &n2);
    i = n1;
    while (i <= n2)
    {
        if (i % 2 != 0)
            printf("%d, eh impar\n", i);
        i++;
    }
    return 0;
}