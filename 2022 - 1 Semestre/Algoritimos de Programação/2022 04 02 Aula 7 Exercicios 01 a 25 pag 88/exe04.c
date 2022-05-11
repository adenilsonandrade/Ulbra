#include <stdio.h>
/*
4. Faca um programa que receba tres numeros e mostre o maior.
*/
int main()
{
    float n1, n2, n3;
    printf("Digite n1\n");
    scanf("%f%*c", &n1);
    printf("Digite n2\n");
    scanf("%f%*c", &n2);
    printf("Digite n3\n");
    scanf("%f%*c", &n3);
    if ((n1 > n2 && n2 >= n3) || n1 > n3 && n3 >= n2)
    printf("O maior e n1");
    else if ((n2 > n1 && n1 >= n3) || n2 > n3 && n3 >= n1)
    printf("o maior e n2");
    else if ((n3 > n1 && n1 >= n2) || n3 > n2 && n2 >= n1)
    printf("O maior e n3");
    else
    printf("Dados invalidos");
    return 0;
}