#include <stdio.h>
#include <math.h>

/*
11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.
*/

int main()
{
    float n1, quad, cub, raiz, rcub;
inicio:
    printf("############################################################\n");
    printf("#                   Conversor de medidas                   #\n");
    printf("#      Digite qualquer numero inteiro maior que zero       #\n");
    printf("############################################################\n\n");
    scanf("%f%*c", &n1);
    system("cls");
    if (n1 <= 0)
    {
        printf("############################################################\n");
        printf("# Numero invalido, digite um numero inteiro maior que zero #\n");
        printf("############################################################\n\n");
        goto inicio;
    }
    else
    {
        quad = n1 * n1;
        cub = n1 * n1 * n1;
        raiz = sqrt(n1);
        rcub = cbrt(n1);
        printf("############################################################\n");
        printf("#                         RESULTADO                        #\n");
        printf("############################################################\n");
        printf("              Quadrado de %.0f = %.0f              \n", n1, quad);
        printf("              Cubo de %.0f = %.0f                  \n", n1, cub);
        printf("              Raiz quadrada de %.0f = %.2f         \n", n1, raiz);
        printf("              Raiz cubica de %.0f = %.2f           \n", n1, rcub);
        printf("############################################################\n\n\n");
        goto inicio;
    }
fim:
    return 0;
}