#include <stdio.h>
/*
Comandos de repstição (for).
*/
int main()
{
    int vezes;
    printf("Digite o numero de vezes a repetir\n");
    scanf("%d%*c", &vezes);
    for(int d = 0; d < vezes; d++)
    {
        printf("%d, Escreva um algoritimo\n", d+1);
    }
}