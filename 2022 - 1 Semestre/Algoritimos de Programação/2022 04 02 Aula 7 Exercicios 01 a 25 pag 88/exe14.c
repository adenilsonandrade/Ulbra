#include <stdio.h>
/*
14. Faca um programa que receba o salario de um funcionario e, usando a tabela a seguir, calcule e mostre o novo salario.
Faixa salarial
Salario                 % de aumento
Ate R$ 300                  50%
R$ 300 ○---● R$ 500         40%
R$ 500 ○---● R$ 700         30%
R$ 700 ○---● R$ 800         20%
R$ 800 ○---● R$ 1000        10%
Acima de R$ 1000             5%
*/
int main()
{
    float sal, novosal;
    printf("Digite o valor do salario\nR$ ");
    scanf("%f%*c", &sal);
    if (sal <= 300.00){
        novosal = (sal * 0.50) + sal;
        printf("O novo salario e de R$ %.2f", novosal);
    }
    else if (sal > 300.00 && sal <= 500.00){
        novosal = (sal * 0.40) + sal;
        printf("O novo salario e de R$ %.2f", novosal);
    }
    else if (sal > 500.00 && sal <= 700.00){
        novosal = (sal * 0.30) + sal;
        printf("O novo salario e de R$ %.2f", novosal);
    }
    else if (sal > 700.00 && sal <= 800.00){
        novosal = (sal * 0.20) + sal;
        printf("O novo salario e de R$ %.2f", novosal);
    }
    else if (sal > 800.00 && sal <= 1000.00){
        novosal = (sal * 0.10) + sal;
        printf("O novo salario e de R$ %.2f", novosal);
    }
    else if (sal > 1000.00){
        novosal = (sal * 0.05) + sal;
        printf("O novo salario e de R$ %.2f", novosal);
    }
    else if (sal < 0.00){
        printf("Digite um valor maior que zero");
    }
    else
        printf("Dados invalidos");
    return 0;
}