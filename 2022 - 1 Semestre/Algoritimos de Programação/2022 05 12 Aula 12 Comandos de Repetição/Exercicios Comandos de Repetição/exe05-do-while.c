#include <stdio.h>
/*
Faça um programa que leia um número N, e realize a soma dos números de 1 a N. Ao final, deve-se escrever o resultado. Esse algoritmo deve ser feito duas vezes uma usando o While e Do-While
*/
int main()
{
    int i = 0, n, count = 0;
    printf("Digite um numero\n");
    scanf("%d%*c", &n);
    do
    {
        i++;
        count = count + i;
    }
    while  (i < n);
    printf("A soma dos numeros de 1 a %d eh %d\n", n, count);
    return 0;
}