#include <stdio.h>
/*
7. Faca um programa que receba o salario base de um funcionario, calcule e mostre seu salario a receber,
sabendo-se que o funcionario tem gratificacao de R$ 50 e paga imposto de 10% sobre o salario base.
*/
int main()
{
    float rec,sal,imp;
    printf("Digite salario\n");
    scanf("%f%*c", &sal);
    imp=sal*10/100;
    rec=sal+50-imp;
    printf("Salario a receber %.2f = Salario %.2f + gratificacao de 50.00 - imposto de %.2f", rec,sal,imp);
    return 0;
}