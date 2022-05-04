#include <stdio.h>
#include <math.h>
/*
12. Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
*/
int main()
{
    float n1, n2, elv;
    printf("############################################################\n");
    printf("#      Digite qualquer numero inteiro maior que zero      #\n");
    printf("############################################################\n\n");
inicio:
    scanf("%f%*c", &n1);
    if (n1 <= 0)
    {
        printf("############################################################\n");
        printf("# Numero invalido, digite um numero inteiro maior que zero #\n");
        printf("############################################################\n\n");
        goto inicio;
    }
    else
        printf("############################################################\n");
        printf("#       Digite qualquer numero inteiro maior que zero      #\n");
        printf("############################################################\n\n");
meio:
    scanf("%f%*c", &n2);
    if (n2 <= 0)
    {
        printf("############################################################\n");
        printf("# Numero invalido, digite um numero inteiro maior que zero #\n");
        printf("############################################################\n\n");
        goto meio;
    }
    else
        elv = pow(n1, n2);
    printf("############################################################\n");  
    printf("#                         RESULTADO                        #\n");  
    printf("############################################################\n\n");        
    printf("        O numero %.0f elevado ao numero %.0f = %.0f\n\n", n1, n2, elv);
    printf("############################################################\n\n");
    return 0;
}