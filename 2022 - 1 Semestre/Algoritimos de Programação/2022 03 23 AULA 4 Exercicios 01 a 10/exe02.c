#include <stdio.h>
/*
2. Faca um programa que receba tres notas, calcule e mostre a media aritmetica.
*/
    int main()
{
    float media,n1,n2,n3;
    printf("Digite N1\n");
    scanf("%f%*c", &n1);
    printf("Digite N2\n");
    scanf("%f%*c", &n2);
    printf("Digite N3\n");
    scanf("%f%*c", &n3);
    media=(n1+n2+n3)/3;
    printf("N1 %.0f + N2 %.0f + N3 %.0f / 3 = %.0f", n1,n2,n3,media);
    return 0;
}