#include <stdio.h>
/*
11. Faca um programa que receba o salario atual de um funcionario e, usando a tabela a seguir, calcule e mostre o valor do aumento e o novo salario.
    Salario                 % de Aumento
Ate R$ 300                      15%
R$ 300 ○---● R$ 600             10%
F$ 600 ○---● R$ 900              5%
Acima de R$ 900                   0
*/
int main()
{
    float sal, aum, novosal;
    printf("Digite o valor do salario\nR$ ");
    scanf("%f%*c", &sal);
    if (sal <= 300.00){
    aum = (sal * 0.15);
    novosal = sal + aum;
    printf("O aumento do salarido e de R$ %.2f, o novo salario e de R$ %.2f", aum,novosal);}
    else if (sal > 300.00 && sal <= 600.00){
    aum = (sal * 0.10);
    novosal = sal + aum;
    printf("O aumento do salarido e de R$ %.2f, o novo salario e de R$ %.2f", aum,novosal);}
    else if (sal > 600.00 && sal <= 900.00){
    aum = (sal * 0.05);
    novosal = sal + aum;
    printf("O aumento do salarido e de R$ %.2f, o novo salario e de R$ %.2f", aum,novosal);}
    else if (sal > 900.00){
    printf("Nao ha aumento para quem recebe acima de R$ 900,00");}
    else
    printf("Dados invalidos");
    return 0;
}