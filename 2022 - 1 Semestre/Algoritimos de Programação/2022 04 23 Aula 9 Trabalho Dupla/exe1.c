#include <stdio.h>
int main()
{
    float n1, n2, soma;
    printf("digite o n1\n");
    scanf("%f%*c", &n1);
    printf("digite o n2\n");
    scanf("%f%*c", &n2);
    if (n1 > n2){
    soma=n1+100;
    printf("n1 = %.0f e maior, somado a 100 = %.0f",n1,soma);}
    else if (n2 > n1){
    soma=n2+100;
    printf("n2 = %.0f e maior, somado a 100 = %.0f",n2,soma);}
    else
    printf("Dados invalidos");
    return 0;
}