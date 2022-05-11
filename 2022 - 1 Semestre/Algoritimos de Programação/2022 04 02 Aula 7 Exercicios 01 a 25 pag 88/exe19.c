#include <stdio.h>
/*
19. Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes formulas (onde h e altura):
para homens: (72.7 * h) - 58.
para mulheres: (62.1 * h) - 44.7.
*/
int main()
{
    float h, peso;
    int sexo;
    printf("Digite a altura metros e centimetros separados por ponto.\n");
    scanf("%f%*c", &h);
    printf("DIgite:\n1. Para homem\n2. Para mulher\n");
    scanf("%d%*c", &sexo);
    switch (sexo){
    case 1:{
        peso = (72.7 * h) - 58;
        printf("O peso ideal e %.2f", peso);
        break;
    }
    case 2:{
        peso = ( 62.1 * h) - 44.7;
        printf("O peso ideal e %.2f", peso);
        break;
    }
    default:
    printf("Opcao invalida");
    }
    return 0;
}