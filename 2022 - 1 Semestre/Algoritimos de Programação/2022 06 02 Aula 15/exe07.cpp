/*
7 - Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.
*/
#include <stdio.h>
int main()
{
    float numero[10];
    float soma = 0;
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero\n");
        scanf("%f%*c", &numero[i]);
        if (numero[i] > 0)
            soma = soma + numero[i];
        if (numero[i] < 0)
            cont++;
    }
    printf("Foram digitados %d numeros reais negativos\nA soma dos numeros reias positivos eh %.2f\n", cont, soma);
    return 0;
}