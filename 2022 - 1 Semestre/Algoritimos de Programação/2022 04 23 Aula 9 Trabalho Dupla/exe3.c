#include <stdio.h>
int main()
{
    float n1, n2, dif;
    printf("Digite n1\n");
    scanf("%f%*c", &n1);
    printf("Digite n2\n");
    scanf("%f%*c", &n2);
    if (n1>n2){
        dif=n1-n2;
        printf("O maior numero n1 = %.0f e o menor numero n2 = %.0f, a diferneca = %0.f", n1,n2,dif);
    }
    else if (n2>n1){
        dif=n2-n1;
        printf("O maior numero n2 = %0.f e o menor numero n1 = %.0f, a diferenca = %0.f", n2,n1,dif);
    }
    else
    printf("Dados invalidos");
    return 0;
}