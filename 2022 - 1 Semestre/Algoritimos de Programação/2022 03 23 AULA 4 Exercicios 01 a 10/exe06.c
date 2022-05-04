#include <stdio.h>
/*
6. Faca um programa que receba o salario base de um funcionario, calcule e mostre o salario a receber,
sabendo-se que o funcionario tem gratificacao de 5% sobre o salario base e paga imposto de 7% tambem 
sobre o salario base.
*/
int main()
{
    float sal,rec,grat,imp;
    printf("Digite o salario\n");
    scanf("%f%*c", &sal);
    grat=sal*5/100;
    imp=sal*7/100;
    rec=sal+grat-imp;
    printf("Salario a receber %2.f = salario base %2.f + gratificacao %2.f - imposto %2.f", rec,sal,grat,imp);
    return 0;
}