#include <stdio.h>
/*
Efetue um programa que mostre todos os números inteiros ímpares situados na faixa de 1000 a 1500. Esse algoritmo deve ser feito duas vezes uma usando o FOR,WHILE;
*/
int main()
{
    int i = 1000;
    while (i < 1500)
    {
        if (i % 2 != 0)
            printf("%d, eh impar\n", i);
        i++;
    }
    return 0;
}