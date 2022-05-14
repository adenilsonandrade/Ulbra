#include <stdio.h>
#include <windows.h>
/*
Efetue um programa que leia a nota de 10 alunos de uma turma. Ao final, deve ser escrita a média geral da turma. Esse algoritmo deve ser feito duas vezes uma usando o FOR, e DO-WHILE
*/
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float count;
    int num = 1, nota, media;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota do %dº aluno\n", num++);
        scanf("%d%*c", &nota);
        count = count + nota;
        media = count / 10;
    }
    printf("A media da turma é %d", media);
    return 0;
}