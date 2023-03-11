/*
4 - Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos iguais a 30, mostrando as posições em que apareceram.
*/
#include <stdio.h>
int main()
{
    int numero[15];
    int i = 0;
    int cont = 0;
    for (int i = 0; i < 15; i++)
    {
        printf("Digite o %dº numero\n", i + 1);
        scanf("%d%*c", &numero[i]);
    }
    for (i = 0; i < 15; i++)
    {
        if (numero[i] == 30)
            cont++;
    }
    printf ("O numero 30 ");
    if (cont == 1)
        printf("foi digitado 1 vez, na posição:\n");
    else if (cont > 1)
        printf("foi digitado %d vezes, nas seguintes posições:\n", cont);
    else
        printf("não foi digitado.\n");
    for (i = 0; i < 15; i++)
    {
        if (numero[i] == 30)
            printf("%d\n", i + 1);
    }
    return 0;
}