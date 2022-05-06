#include <stdio.h>
int main()
{
    float n1;
    printf("digite a idade da pessoa\n");
    scanf("%f%*c", &n1);
    if (n1 >= 18){
        printf("Maior de idade");
    }
    else if (n1 >= 0 && n1 <= 17){
        printf("Menor de idade");
    }
    else
        printf("Dados invalidos");
    return 0;
}