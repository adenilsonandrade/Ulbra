#include <stdio.h>

/*
13. Sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas.
*/

int main()
{
    float pe, pol, jar, mil;
    printf("########################################################################################\n");
    printf("    Digite uma medida em pes para ter seu resultado em polegadas, jardas e milhas\n");
    printf("########################################################################################\n\n");
inicio:
    scanf("%f%*c", &pe);
    system("cls");
    pol = pe * 12;
    jar = pe / 3;
    mil = jar / 1760;
    printf("########################################################################################\n");
    printf("                             %.0f pes e igual a:\n", pe);
    printf("########################################################################################\n");
    printf("                             %.0f polegadas\n", pol);
    printf("                             %.2f jardas\n", jar);
    printf("                             %.6f milha(s)\n", mil);
    printf("########################################################################################\n\n");
    printf("########################################################################################\n");
    printf("    Digite uma medida em pes para ter seu resultado em polegadas, jardas e milhas\n");
    printf("########################################################################################\n\n");
    goto inicio;
    return 0;
}