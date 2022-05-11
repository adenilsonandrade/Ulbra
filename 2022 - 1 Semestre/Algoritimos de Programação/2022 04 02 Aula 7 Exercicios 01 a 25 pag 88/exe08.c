#include <stdio.h>
/*
8. Faca um programa para calcular e mostrar o salario reajustado de um funcionario. O percentual de aumento encontra-se na tabela a seguir.
    Salario             % de aumento
Ate R$ 300.00               35%
Acima de R$ 300.00          15%
*/
int main()
{
    float sal, reajuste35, reajuste15;
    printf("Digite o valor do salario\nR$ ");
    scanf("%f%*c", &sal);
    if (sal <= 300.00){
    reajuste35 = (sal * 0.35) + sal;
    printf("O salario com reajuste de 35 porcento e de R$ %.2f", reajuste35);}
    else if (sal > 300.00){
    reajuste15 = (sal * 0.15) + sal;
    printf("O salario com reajuste de 15 porcento e de R$ %.2f", reajuste15);}
    else
    printf("Dados inseridos invalidos");
    return 0;
}