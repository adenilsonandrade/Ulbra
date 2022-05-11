#include <stdio.h>
/*
18. Faca um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou nao.
*/
int main()
{
    float idade;
    printf("digite a idade da pessoa\n");
    scanf("%f%*c", &idade);
    if (idade >= 18){
        printf("Maior de idade");
    }
    else if (idade >= 0 && idade <= 17){
        printf("Menor de idade");
    }
    else
        printf("Dados invalidos");
    return 0;
}