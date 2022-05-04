#include <stdio.h>
/*
8. Faca um programa que receba o valor de um deposito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.
*/

int main()
{
    float dep,taxa,rend,tot;
    printf("Digite o valor depositado\n");
    scanf("%f%*c", &dep);
    printf("Digite a taxa de juros\n");
    scanf("%f%*c", &taxa);
    rend=dep*taxa/100;
    tot=dep+rend;
    printf("Valor apos rendimento %.2f = deposito %.2f + rendimento %.2f", tot,dep,rend);
    return 0;
}