#include <stdio.h>
int main()
{
    float n1,n2,dif;
    printf("digite n1\n");
    scanf("%f%*c", &n1);
    printf("digite n2\n");
    scanf("%f%*c", &n2);
    if (n1 == n2){
        printf("NUMEROS IGUAIS");
    }
    else if (n1>n2){
        printf("n1 = %.0f e maior que n2 = %.0f",n1,n2);
    }
    else if (n1<n2){
        printf("n2 = %.0f e maior que n1 = %.0f",n2,n1);
    }
    else 
        printf("Dados invalidos");
    return 0;
}