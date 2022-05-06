#include <stdio.h>
int main()
{
    float n1, n2, n3;
    printf("Digite n1\n");
    scanf("%f%*c", &n1);
    printf("Digite n2\n");
    scanf("%f%*c", &n2);
    printf("Digite n3\n");
    scanf("%f%*c", &n3);
    if ((n1 > n2 && n2 >= n3) || n1 > n3 && n3 >= n2){
        printf("O maior numero e n1\n");
    }
    else if ((n2 > n1 && n1 >= n3) || n2 > n3 && n3 >= n1){
        printf("O maior numero e n2\n");
    }
    else if ((n3 > n1 && n1 >= n2) || n3 > n2 && n2 >= n1){
        printf("O maior numero e n3\n");
    }
    else if (n1 == n2 && n2 == n3){
        printf("Os valores sao iguais\n");
    }
    else
        printf("Dados invalidos");
    return 0;
}