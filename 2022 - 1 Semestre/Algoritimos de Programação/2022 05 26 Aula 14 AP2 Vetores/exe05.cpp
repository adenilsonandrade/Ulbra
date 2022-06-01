// 5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
#include <stdio.h>
int main()
{
    int valor[10];
    int i = 0;
    int cont = 0;
    for (i = 0; i < 10; i++){
        printf("Digite um numero\n");
        scanf("%d%*c", &valor[i]);
        if (valor[i] % 2 == 0){
            cont++;
        }
    }
    printf("Foram digitados %d numeros pares\nSao pares os seguintes numeros\n", cont);
    for (i = 0; i < 10; i++){
        if (valor[i] % 2 == 0){
            printf("%d\n", valor[i]);
        }
    }
    return 0;
}