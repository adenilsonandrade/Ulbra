#include <stdio.h>
/*
1. Faca um programa que receba quatro notas de um aluno, calcule e mostre a media aritimetica das notas e a mensagem de aprovado ou reprovado, considerando para aprovacao media 7.
*/
int main()
{
    float n1, n2, n3, n4, media;
    printf("Digite a nota 1\n");
    scanf("%f%*c", &n1);
    printf("Digite a nota 2\n");
    scanf("%f%*c", &n2);
    printf("Digite a nota 3\n");
    scanf("%f%*c", &n3);
    printf("Digite a nota 4\n");
    scanf("%f%*c", &n4);
    media=(n1+n2+n3+n4)/4;
    if (media >= 7.0)
    printf("Aprovado");
    else
    printf("Reprovado");
    return 0;
}