#include <stdio.h>
/*
Comandos de repstição (do-while).
*/
int main()
{
    int d;
    int vezes;
    d = 0;
    printf("Digite o numero de vezes a repetir\n");
    scanf("%d%*c", &vezes);
    do
    {
        printf("%d, Escreva um algoritimo\n", d+1);
        d++; /* d=d+1;*/
    } while (d < vezes);
}