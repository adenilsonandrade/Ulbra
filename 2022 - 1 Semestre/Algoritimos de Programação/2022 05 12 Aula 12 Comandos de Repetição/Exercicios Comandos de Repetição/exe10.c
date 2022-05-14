#include <stdio.h>
/*
Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.
*/
int main()
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero qualquer\n");
        scanf("%d%*c", &num);
        if (num % 2 == 0)
            printf("%d eh par\n", num);
        else
            printf("%d eh impar\n", num);
    }
    return 0;
}