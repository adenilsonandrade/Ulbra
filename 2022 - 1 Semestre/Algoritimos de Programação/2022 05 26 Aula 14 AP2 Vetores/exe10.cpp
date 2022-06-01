// 10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int nota[15];
    int media = 0;
    int soma = 0;
    int i;
    for (i = 0; i < 15; i++){
        printf("Digite a nota do %dº aluno:\n", i + 1);
        scanf("%d%*c", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma / 15;
        printf("A média geral é: %d\n", media);
    return 0;
}