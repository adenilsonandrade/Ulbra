#include <stdio.h>
/*
Elabore um programa que calcule e escreva a soma de 10 números lidos.Esse algorimo deve ser feito três vezes uma usando o FOR, DO-WHILE e WHILE
*/
int main()
{
    int num, soma = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Escreva um algoritimo\n");
        scanf("%d%*c", &num);
        soma = soma + num;
    }
    printf("Soma e %d", soma);
    return 0;
}