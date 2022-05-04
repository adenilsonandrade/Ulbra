#include <stdio.h>

/*
Exercicio 2 Pag. 59)
Faca um programa que receba tres notas de uma aluno, calcule e mostre a media aritimetica e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverao
tirar para serem aprovados, considerando que a media exigida e 6.0.
0.0 ate 3.0 = Reprovado
3.0 ate 7.0 = Exame
7.0 ate e igual a 10 = Aprovado
*/

int main()
{
    float av1, av2, av3, af, media;
    printf("Digite a nota da Avaliacao 1\n");
    scanf("%f%*c", &av1);
    printf("Digite a nota da Avaliacao 2\n");
    scanf("%f%*c", &av2);
    printf("Digite a nota da Avaliacao 2\n");
    scanf("%f%*c", &av3);
    media=(av1+av2+av3)/3;
    if ((media >= 7) && (media <= 10))
    {
        printf("Parabens voce esta aprovado\n");
        printf("Media %.2f.\n", media);
    }
    else if ((media >= 3) && (media < 7))
    {
        af = 12 - media;
        printf("Sua media foi %.2f.\n", media);
        printf("Voce pegou avalaicao final\n");
        printf("Para ser aprovado voce precisa tira nota %.2f\n", af);
    }
    else if ((media >= 0) && (media < 3))
    {
        printf("Reprovado\n");
    }
    else
    {
        printf("Dados invalidos");
    }
    return 0;
}