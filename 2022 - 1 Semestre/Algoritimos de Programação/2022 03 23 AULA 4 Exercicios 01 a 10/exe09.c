#include <stdio.h>
/*
9. Faca um programa que calcule e mostre a area de um triangulo. Sabe-se que: Area = (base * altura)/2.
*/

int main()
{
    float area,base,alt;
    printf("Digite base\n");
    scanf("%f%*c", &base);
    alt=base;
    area=(base*alt)/2;
    printf("Area do triangulo %.0f, base %.0f * a altura %.0f / 2", area,base,alt);
    return 0;
}