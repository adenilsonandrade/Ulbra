#include <stdio.h>
/*
Elabore um programa que escreva a tabuada do número 9.
*/
int main()
{
    int num=1;
    for (int i = 9; i <= 90; i++)
    {
        if (i % 9 == 0)
            printf("9 x %d = %d\n", num++, i);
    }
    return 0;
}