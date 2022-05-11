#include <stdio.h>
/*
12. Faca um programa que receba o salario bruto de um funcionario e, usando a tabela a seguir, calcule e mostre o valor a receber. Sabe-se que este e composto pelo salario do funcionario acrescido de gratificacao e descontado o imposto de 7% sobre o salario sem gratificacao.
Tabela das gratificacoes
Salario                 Gratificacao
Ate R$ 350                  R$ 100
R$ 350 ○---● R$ 600         R$ 75
R$ 600 ○---● R$ 900         R$ 50
Acima de R$ 900             R$ 35
*/
int main()
{
    float sal, rec;
    printf("Digite o valor bruto do salario\nR$ ");
    scanf("%f%*c", &sal);
    if (sal <= 350.00){
        rec = sal + 100.00 - (sal * 0.07);
        printf("O valor a receber e de R$ %.2f", rec);
    }
    else if (sal > 350.00 && sal <= 600.00){
        rec = sal + 75.00 - (sal * 0.07);
        printf("O valor a receber e de R$ %.2f", rec);
    }
    else if (sal > 600.00 && sal <= 900.00){
        rec = sal + 50.00 - (sal * 0.07);
        printf("O valor a receber e de R$ %.2f", rec);
    }
    else if (sal > 900.00){
        rec = sal + 35.00 - (sal * 0.07);
        printf("O valor a receber e de R$ %.2f", rec);
    }
    else
        printf("Dados invalidos");
    return 0;
}