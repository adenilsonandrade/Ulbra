#include <stdio.h>
#define PI 3.1415 /// Constantes podem ser colocadas aqui.
/*
10. Faca um programa que calcule e mostre a area de um circulo. Sabe-se que: Area = p * R2.
*/

int main()
{
    float raio,area;
    printf("Digite o raio do circulo\n");
    scanf("%f%*c", &raio);
    area=PI*raio*raio;
    printf("Area do circulo %.2f = pi %.4f * raio %.0f * raio %.0f\n", area,PI,raio,raio);
    return 0;
}