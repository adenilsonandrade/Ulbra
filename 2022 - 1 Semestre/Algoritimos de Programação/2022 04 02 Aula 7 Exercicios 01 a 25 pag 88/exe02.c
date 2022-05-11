#include <stdio.h>
/*
2. Faca um programa que receba duas notas, calcule e mostre a media aritimetica e a mensagem que se encontra no quadro a seguir:
Media Aritimetica           Mensagem
0.0   ●---○   4.0           Reprovado
4.0   ●---○   7.0           Exame
7.0   ●---●   10.0          Aprovado
*/
int main()
{
    float n1, n2, media;
    printf("Digite a nota 1\n");
    scanf("%f%*c", &n1);
    printf("Digite a nota 2\n");
    scanf("%f%*c", &n2);
    media = (n1 + n2) / 2;
    if (media >= 7.0)
        printf("Aprovado");
    else if (media >= 4.0 && media < 7.00)
        printf("Exame");
    else if (media < 4.0)
        printf("Reprovado");
    else
        printf("Dados invalidos");
    return 0;
}