/*
8 - Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média final desses alunos. Calcule e mostre:
- o nome do aluno com a maior média (desconsiderar empates);
- para cada aluno não aprovado, isto é, com a média menor que 7, mostrar quanto esse aluno precisa tirar na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.
*/
#include <stdio.h>
#include <string>
int main()
{
    char nomes[7][10];
    float media[7], maiorMedia = 0, exameFinal = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < 7; i++)
    {
        printf("Digite o nome do %d aluno\n", i + 1);
        scanf("%s%*c", nomes[i]);
        printf("Digite a nota para %s\n", nomes[i]);
        scanf("%f%*c", &media[i]);
        if (maiorMedia < media[i])
        {
            maiorMedia = media[i];
            j = i;
        }
    }
    printf("A maior media foi %.0f do aluno(a) %s\n\n", maiorMedia, nomes[j]);
    for (i = 0; i < 7; i++)
        if (media[i] < 7)
        {
            exameFinal = 10 - media[i];
            printf("%s pegou exame final, para ser aprovado precisa tirar nota %.2f\n", nomes[i], exameFinal);
        }
    return 0;
}