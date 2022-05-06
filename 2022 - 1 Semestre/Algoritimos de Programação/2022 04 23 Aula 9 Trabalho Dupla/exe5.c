#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Digite n1\n");
    scanf("%d%*c", &n1);
    printf("Digite n2\n");
    scanf("%d%*c", &n2);
    if (n1%2==0 && n2%2==0){
    printf("%.0d e %.0d sao multiplos de 2",n1,n2);
    }
    else if (n1%2==0){
    printf("%.0d e multiplo de 2, mas %.0d nao",n1,n2);
    }
    else if (n2%2==0){
    printf("%.0d e multiplo de 2, mas %.0d nao",n2,n1);
    }
    else
    printf("%.0d e %.0d nao sao multipliplos de 2",n1,n2);
    return 0;
}