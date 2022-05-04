#include <stdio.h>
#include <time.h>
#include <windows.h>
/*
Exercicio 9)
Faca um programa que mostre a data e a hora do sistema nos seguintes formatos DD/MM/AAAA - mes por
extenso e hora:minuto
*/
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    struct tm *data_hora;
    time_t sec;
    time(&sec);
    data_hora = localtime(&sec);
    int hora = data_hora->tm_hour;
    int minuto = data_hora->tm_min;
    int dia = data_hora->tm_mday;
    int mes = data_hora->tm_mon + 1;
    int ano = data_hora->tm_year + 1900;
    printf("Data: %.0d/", dia);
    switch (mes)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    }
    printf("/%.d\n", ano);
    printf("Hora: %.0d:%.0d min", hora, minuto);
    return 0;
}