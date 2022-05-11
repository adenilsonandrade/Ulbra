#include <stdio.h>
/*
21. Faca um programa que receba o preco de um produto e seu codigo de origem e mostre sua procedencia. A procedencia obedece a tabela a seguir.
Codigo de origem            Procedencia
1                          Sul
2                         Norte
3                         Leste
4                         Oeste
5 ou 6                    Nordeste
7 ou 8 ou 9               Sudeste
10 a 20                   Centro-Oeste
21 a 30                   Nordeste
*/
int main()
{
    float preco, cod;
    printf("Digite o preco do produto\nR$ ");
    scanf("%f%*c", &preco);
    printf("Digite o codigo do produto\n");
    scanf("%f%*c", &cod);
    if (cod == 1){
        printf("Procedencia Sul");
    }
    else if (cod == 2){
        printf("Procedencia Norte");
    }
    else if (cod == 3){
        printf("Procedencia Leste");
    }
    else if (cod == 4){
        printf("Procedencia Oeste");
    }
    else if (cod == 5 || cod == 6 || cod >= 21 && cod <= 30){
        printf("Procedencia Nordeste");
    }
    else if (cod == 7 || cod == 8 || cod == 9){
        printf("Procedencia Sudeste");
    }
    else if (cod >= 10 && cod <= 20){
        printf("Procedencia Centro-oeste");
    }
    else
        printf("Dados invalidos");
    return 0;
}