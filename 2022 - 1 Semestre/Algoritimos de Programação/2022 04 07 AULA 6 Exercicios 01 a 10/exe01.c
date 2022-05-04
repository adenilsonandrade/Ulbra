#include <stdio.h>
#define PESOTRAB 2
#define PESOAVAS 3
#define PESOEXAF 5
/*
Exercicio 1 Pág 57)
A nota final de um estudante e calculada a partir de tres notas atribuidas, respectivamente,
a um trabalho de laboratorio, a uma avaliacao semestral e a um exame final. A media das tres
notas mencionadas obedece aos pesos a seguir:
Trabalho = 2, Avaliacao = 3, Exame = 5.
*/
int main()
{
    float media, trab, avas, exaf;
    printf("Digite a nota do trabalho\n");
    scanf("%f%*c", &trab);
    printf("Digite a nota da avaliacao semestral\n");
    scanf("%f%*c", &avas);
    printf("Digite a nota do Exame Final\n");
    scanf("%f%*c", &exaf);
    media = (trab * PESOTRAB + avas * PESOAVAS + exaf * PESOEXAF) / 10;
    if (media >= 8 && media <= 10)
    {
        printf("Media %.2f\n", media);
        printf("Conceito A\n");
    }
    else if (media >= 7 && media < 8)
    {
        printf("Media %.2f\n", media);
        printf("Conceito B\n");
    }
    else if (media >= 6 && media < 7)
    {
        printf("Media %.2f\n", media);
        printf("Conceito C\n");
    }
    else if (media >= 5 && media < 6)
    {
        printf("Media %.2f\n", media);
        printf("Conceito D\n");
    }
    else if (media >= 0 && media < 5)
    {
        printf("Media %.2f\n", media);
        printf("Conceito E\n");
    }
    else
    {
        printf("Dados invalidos");
    }
    return 0;
}