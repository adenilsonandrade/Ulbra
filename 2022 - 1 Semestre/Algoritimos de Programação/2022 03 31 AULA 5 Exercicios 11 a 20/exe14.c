#include <stdio.h>
/*
Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos ela terá em 2050.
*/
int main()
{
    float nasc, ano = 2022, ida, fut;
    printf("#############################################################################\n");
    printf("#                        Digite o ano de nascimento                         #\n");
    printf("#############################################################################\n\n");
inicio:
    scanf("%f%*c", &nasc);
    if (nasc >= 1900 && (nasc <= 2022))
    {
        ida = ano - nasc;
        fut = 2050 - nasc;
        printf("#############################################################################\n");
        printf("             Nascido em %.0f, tem %.0f anos e em 2050 tera %.0f\n", nasc, ida, fut);
        printf("#############################################################################\n\n");
    }
    else
    {
        printf("#############################################################################\n");
        printf("#                Ano invalido, digite um ano entre 1900 e 2022              #\n");
        printf("#############################################################################\n\n");
        goto inicio;
        return 0;
    }
}