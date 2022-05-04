#include <stdio.h>
/*
Exercio 6)
Faca um programa que receba um numero inteiro e verifique se e par ou impar.
*/
int main()
{
    int num;
    printf("Digite um numero\n");
    scanf("%d%*c", &num);
    if (num%2==0)
    {
        printf("O numero e par\n");
    }
    else
        printf("O numero e impar\n");
    return 0;
}