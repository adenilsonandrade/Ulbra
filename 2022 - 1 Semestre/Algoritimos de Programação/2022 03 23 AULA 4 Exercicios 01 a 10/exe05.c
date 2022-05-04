#include <stdio.h>
/*
5. Faca um programa que receba o salario de um funcionario e o percentual de aumento, calcule e mostre
o valor do aumento e o novo salario.
*/
int main()
{
    float sal,aum,per,nov;
    printf("Calcula novo salario utilizando salario + percentual de aumento\n");
    printf("Digite o Salario\n");
    scanf("%f%*c", &sal);
    printf("Digite o percentual de aumento\n");
    scanf("%f%*c", &per);
    aum=sal*per/100;
    nov=sal+aum;
    printf("Novo salario = %.2f = salario %.2f + aumento %.2f", nov,sal,aum);
    return 0;
}