#include <stdio.h>
/*
1. Faca um programa que receba quatro numeros inteiros, calcule e mostre a soma desses numeros.
*/
int main()
{
    float soma,n1,n2,n3,n4;
    printf("Digite n1\n");
    scanf("%f%*c", &n1);
    printf("Digite n2\n");
    scanf("%f%*c", &n2);
    printf("Digite n3\n");
    scanf("%f%*c", &n3);
    printf("Digite n4\n");
    scanf("%f%*c", &n4);
    soma = n1 + n2 + n3 + n4;
    printf("N1 %.0f + N2  %.0f + N3 %.0f + N4 %.0f Soma = %.0f\n", n1,n2,n3,n4,soma);
    return 0;
}