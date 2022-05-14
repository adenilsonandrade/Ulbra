#include <stdio.h>
/*
Comandos de repstição (while), (do-while), (for).
*/
int main()
{
    int i;
    i = 0;
    while (i < 10)
    {
        printf("%d, Escreva um algoritimo\n", i+1);
        i++; /* i=i+1;*/
    }
    return 0;
}