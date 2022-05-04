#include <stdio.h>
/*
4. Faca um programa que receba o salario de um funcionario, calcule e mostre o novo salario, sabendo-se 
que este sofreu um aumento de 25%.
*/
int main()
{
    float sal, novosal;
    printf("Calcula aumento de 25 no salario\n");
    printf("Digite o salario\n");
    scanf("%f%*c", &sal);
    novosal = sal + sal * 25 / 100;
    printf("Novo salario = %.2f", novosal);
    return 0;
}