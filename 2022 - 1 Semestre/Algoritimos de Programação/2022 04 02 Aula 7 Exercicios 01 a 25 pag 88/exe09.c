#include <stdio.h>
/*
9. Um banco concedera um credito especial aos seus clientes, de acordo com o saldo medio no ultimo ano. Faca um programa que receba o saldo medio de um cliente e calcule o valor do credito, de acordo com a tabela a seguir. Mostre o saldo medio e o valor do credito.
Saldo medio                       Percentual
Acima de R$ 400,00                30% do saldo medio
R$ 400,00 ●---○ R$ 300,00         25% do saldo medio
R$ 300,00 ●---○ R$ 200,00         20% do saldo medio
Ate R$ 200,00                     10% do saldo medio
*/
int main()
{
    float saldo, cred;
    printf("Digite o valor do saldo medio\nR$ ");
    scanf("%f%*c", &saldo);
    if (saldo >= 400.00){
        cred = (saldo * 0.3);
        printf("\nO saldo medio e de R$ %.2f e o valor do credito e de R$ %.2f", saldo, cred);
    }
    else if (saldo >= 300.00 && saldo < 400.00){
        cred = (saldo * 0.25);
        printf("\nO saldo medio e de R$ %.2f e o valor do credito e de R$ %.2f", saldo, cred);
    }
    else if (saldo >= 200.00 && saldo < 300.00){
        cred = (saldo * 0.20);
        printf("\nO saldo medio e de R$ %.2f e o valor do credito e de R$ %.2f", saldo, cred);
    }
    else if (saldo < 200.00){
        cred = (saldo * 0.10);
        printf("\nO saldo medio e de R$ %.2f e o valor do credito e de R$ %.2f", saldo, cred);
    }
    else
        printf("Dados inseridos sao invalidos");
    return 0;
}