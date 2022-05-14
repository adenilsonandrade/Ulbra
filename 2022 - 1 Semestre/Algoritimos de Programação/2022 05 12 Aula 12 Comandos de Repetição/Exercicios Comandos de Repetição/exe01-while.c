#include <stdio.h>
/*
Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE
*/
int main()
{
    int i = 0, count = 0, num;
    while (i < 10)
    {
        printf("Digite um numero\n");
        scanf("%d%*c", &num);
        i++;
        count = count + num;
    }
    printf("A soma e %d", count);
    return 0;
}