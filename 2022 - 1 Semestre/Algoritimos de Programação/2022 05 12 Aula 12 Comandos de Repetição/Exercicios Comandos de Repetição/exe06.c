#include <stdio.h>
/*
Efetue um programa que leia 5 números. Para cada número fornecido, escrever se ele é NULO, NEGATIVO ou POSITIVO.
*/
int main()
{
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero\n");
        scanf("%d%*c", &num);
        if (num < 0)
            printf("NEGATIVO\n");
        else if (num == 0)
            printf("NULO\n");
        else
            printf("POSITIVO\n");
    }
    return 0;
}