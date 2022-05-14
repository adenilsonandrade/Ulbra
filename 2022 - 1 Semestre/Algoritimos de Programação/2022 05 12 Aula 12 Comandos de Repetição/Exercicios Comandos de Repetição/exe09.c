#include <stdio.h>
/*
Elabore um programa que escreva a tabuada do número 9.
*/
int main()
{
    int n1, i, num = 1;
    printf("Digite um numero qualquer\n");
    scanf("%d%*c", &n1);
    i = n1;
    do
    {
        if (i % n1 == 0)
            printf("%d x %d = %d\n", n1, num++, i);
        i++;
    } while (num <= 10);
    return 0;
}