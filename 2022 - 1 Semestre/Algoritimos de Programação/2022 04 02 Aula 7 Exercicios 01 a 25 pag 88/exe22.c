#include <stdio.h>
/*
22. Faca um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre em qual grupo de risco essa pessoa se encaixa.
########################## Peso #############################
Idade               Ate 60kg        entre 60 e 90 (inclusive)         Acima de 90
Menores que 20         9                        8                           7
De 20 a 50             6                        5                           4
Maiores que 50         3                        2                           1
*/
int main()
{
    float idade, peso;
    printf("Digite a idade\n");
    scanf("%f%*c", &idade);
    printf("Digite o peso\n");
    scanf("%f%*c", &peso);
    if (idade < 20){
        if (peso <= 60)
            printf("Grupo de risco 9");
        else if (peso > 60 && peso <= 90)
            printf("Grupo de risco 8");
        else if (peso > 90)
            printf("Grupo de risco 7");
        else
            printf("Dados invalido");
    }
    else if (idade >= 20 && idade <= 50){
        if (peso <= 60)
            printf("Grupo de risco 6");
        else if (peso > 60 && peso <= 90)
            printf("Grupo de risco 5");
        else if (peso > 90)
            printf("Grupo de risco 4");
        else
            printf("Dados invalido");
    }
    else if (idade > 50){
        if (peso <= 60)
            printf("Grupo de risco 3");
        else if (peso > 60 && peso <= 90)
            printf("Grupo de risco 2");
        else if (peso > 90)
            printf("Grupo de risco 1");
        else
            printf("Dados invalido");
    }
    else
        printf("Dados invalidos");
    return 0;
}