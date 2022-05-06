#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    printf("Digite n1\n");
    scanf("%d%*c", &n1);
    printf("Digite n2\n");
    scanf("%d%*c", &n2);
    printf("Digite n3\n");
    scanf("%d%*c", &n3);
    printf("Digite n4\n");
    scanf("%d%*c", &n4);
    if (n1 % 2 == 0 || n2 % 2 == 0 || n3 % 2 == 0 || n4 % 2 == 0){
        if (n1 % 2 == 0)
            printf("%.0d, ", n1);
        if (n2 % 2 == 0)
            printf("%.0d, ", n2);
        if (n3 % 2 == 0)
            printf("%.0d, ", n3);
        if (n4 % 2 == 0)
            printf("%.0d, ", n4);
        printf("sao divisiveis por 2 e ");
    }
    else if (n1 % 3 == 0 || n2 % 3 == 0 || n3 % 3 == 0 || n4 % 3 == 0)
        printf("Nao ha divisiveis por 2, mas ");
    if (n1 % 3 == 0 || n2 % 3 == 0 || n3 % 3 == 0 || n4 % 3 == 0){
        if (n1 % 3 == 0)
            printf("%.0d, ", n1);
        if (n2 % 3 == 0)
            printf("%.0d, ", n2);
        if (n3 % 3 == 0)
            printf("%.0d, ", n3);
        if (n4 % 3 == 0)
            printf("%.0d, ", n4);
        printf("sao divisiveis por 3");}
    else if (n1 % 2 == 0 || n2 % 2 == 0 || n3 % 2 == 0 || n4 % 2 == 0)
    printf("nao ha divisiveis de 3");
    else
        printf("Nenhum dos valores sao divisiveis por 2 ou 3");
    return 0;
}