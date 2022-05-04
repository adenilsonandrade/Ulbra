#include <stdio.h>
/*
3. Faca um programa que receba tres notas e seus respectivos pesos, calcule e mostre a media ponderada.
*/
int main()
{
    float media,n1,n2,n3,p1,p2,p3;
    printf("Digite Peso 1\n");
    scanf("%f%*c", &p1);
    printf("Digite Nota 1\n");
    scanf("%f%*c", &n1);
    printf("Digite Peso 2\n");
    scanf("%f%*c", &p2);
    printf("Digite Nota 2\n");
    scanf("%f%*c", &n2);
    printf("Digite Peso 3\n");
    scanf("%f%*c", &p3);
    printf("Digite Nota 3\n");
    scanf("%f%*c", &n3);
    media=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    printf("Media ponderada = %.2f, Nota 1 %.2f * Peso 1 %.2f + Nota 2 %.2f * Peso 2 %.2f + Nota 3 %.2f * Peso 3 %.2f", media,n1,p1,n2,p2,n3,p3);
    return 0;
}