#include <stdio.h>
/*
5. Faca um programa que receba dois numeros e execute as operacoes listadas a seguir, de acordo com a escolha do usuario.
Escolha do Usuario               Operacao
1              Media entre os numeros digitados
2              Diferenca do maior pelo menor
3              Produto entre os numeros digitados
4              Divisao do primeiro pelo segundo
*/

int main()
{
    float n1, n2, media, dif, prod, div;
    int valor;
    printf("Digite n1\n");
    scanf("%f%*c", &n1);
    printf("Digite n2\n");
    scanf("%f%*c", &n2);
    printf("Digite:\n1 Media entre os numeros digitados\n2 Diferenca do maior pelo menor\n3 Produto entre os numeros digitados\n4 Divisao do primeiro pelo segundo\n");
    scanf("%d%*c", &valor);
    switch (valor){
    case 1:{
        media = (n1 + n2) / 2;
        printf("A media entre os numeros digitados e %.2f", media);
        break;
    }
    case 2:{
        if (n1 > n2){
            dif = n1 - n2;
            printf("Diferenca do maior para o menor e %.2f", dif);}
        else if
            (n2 > n1){
            dif = n2 - n1;
            printf("Diferenca do maior para o menor e %.2f", dif);}
        break;
    }
    case 3:{
        prod = n1 * n2;
        printf("O produto entre os numeros digitados e %.2f", prod);
        break;
    }
    case 4:{
        div = n1 / n2;
        printf("A divisao do primenro pelo segundo e %.4f", div);
        break;
    }
    default:
        printf("Opcao invalida");
    }
    return 0;
}