#include <stdio.h>
/*
7. Uma empresa decide dar um aumento de 30% aos funcionarios com salarios inferiores a R$ 500,00. Faca um programa que receba o salario do funcionario e mostre o valor do salario reajustado ou uma mensagem, caso ele nao tenha direito ao aumento.
*/
int main()
{
    float sal, reajuste;
    printf("Digite o valor do salario\nR$ ");
    scanf("%f%*C", &sal);
    if (sal < 500.00){
    reajuste = (sal * 0.3)+sal;
    printf("O valor do salario com o reajuste e de R$ %.2f", reajuste);}
    else
    printf("Voce nao tem direito ao reajuste");
    return 0;
}