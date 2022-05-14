#include <stdio.h>
#include <windows.h>
/*
Faça um programa que leia a matrícula, o nome e as três notas de 10 alunos, e indique para cada aluno, se ele foi aprovado ou não.
*/
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int mat, nota, num = 1;
    float media, count;
    char nome[100];
    printf("Digite a matrícula\n");
    scanf("%d%*c", &mat);
    printf("Digite o nome\n");
    scanf("%s%*c", &nome);
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a %dº nota\n", num++);
        scanf("%d", &nota);
        count = count + nota;
        media = count / 3;
    }
    if (media >= 7)
        printf("Parabéns %s, matricula %d, você foi aprovado com média %.2f", nome, mat, media);
    else
        printf("Uma pena %s, matricula %d, mas você foi reprovado, sua média foi %.2f", nome, mat, media);
    return 0;
}