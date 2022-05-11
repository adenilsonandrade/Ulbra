#include <stdio.h>
/*
3. Faca um programa que receba dois numeros e mostre o menor.
*/
int main()
{
    float n1, n2;
    printf("Digite n1\n");
    scanf("%f%*c", &n1);
    printf("Digite n2\n");
    scanf("%f%*c", &n2);
    if (n1 < n2)
    printf("n1 = %.0f e menor que n2", n1);
    else
    printf("n2 = %.0f e menor que n1", n2);
    return 0;
}