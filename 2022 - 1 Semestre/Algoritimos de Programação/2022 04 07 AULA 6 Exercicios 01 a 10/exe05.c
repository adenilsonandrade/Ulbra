#include <stdio.h>
/*
Exercio 5)
Faca um programa que receba tres numeros obrigatoriamente em ordem crescente e um quarto numero que nao siga essa regra. Mostre, em seguida, os quatro numeros em ordem decrescente. Suponha que o usuario digitara quatro numeros diferentes.
*/
int main()
{
    float n1, n2, n3, n4;
    printf("Digite tres numeros diferentes e em ordem crescente\n");
    printf("Digite o primeiro numero\n");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero\n");
    scanf("%f%*c", &n2);
    printf("Digite o terceiro numero\n");
    scanf("%f%*c", &n3);
    printf("Digite um quarto numero fora de ordem\n");
    scanf("%f%*c", &n4);
    if (n4 > n3){
        printf("A ordem decrescente e: n4 %.0f, n3 %.0f, n2 %.0f, n1 %.0f\n", n4, n3, n2, n1);}
    else if (n4 > n2 && n4 < n3){
        printf("A ordem decrescente e: n3 %.0f, n4 %.0f, n2 %.0f, n1 %.0f\n", n3, n4, n2, n1);}
    else if (n4 > n1 && n4 < n2){
        printf("A ordem decrescente e: n3 %.0f, n2 %.0f, n4 %.0f, n1 %.0f\n", n3, n2, n4, n1);}
    else if (n4 < n1){
        printf("A ordem decrescente e: n3 %.0f, n2 %.0f, n1 %.0f, n4 %.0f\n", n3, n2, n1, n4);}
    else{
        printf("Dados invalidos");}
    return 0;
}