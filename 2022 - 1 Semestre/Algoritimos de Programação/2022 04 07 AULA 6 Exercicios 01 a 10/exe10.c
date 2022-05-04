#include <stdio.h>
#include <windows.h>
/*
Exercicio 10 Pag 67)
Faca um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuario.
Cada data deve ser composta por tres valores inteiros, em que o primeiro representa o dia, o segundo, o mes,
e o terceiro o ano.
*/

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float dia, mes, ano, dia2, mes2, ano2;
    printf("Digite o dia (dd)\n");
    scanf("%f%*c", &dia);
    printf("Digite o mês (mm)\n");
    scanf("%f%*c", &mes);
    printf("Digite o ano (aaaa)\n");
    scanf("%f%*c", &ano);
    printf("Digite o dia (dd)\n");
    scanf("%f%*c", &dia2);
    printf("Digite o mês (mm)\n");
    scanf("%f%*c", &mes2);
    printf("Digite o ano (aaaa)\n");
    scanf("%f%*c", &ano2);
    if (ano > ano2 && mes > mes2 && dia > dia2)
        printf("A maior data é %.0f/%.0f/%.0f", dia, mes, ano);
    else
        printf("A maior data é %.0f/%.0f/%.0f", dia2, mes2, ano2);
    return 0;
}