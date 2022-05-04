#include <stdio.h>

/*
Exercicio 8)
Faca um programa que mostre o menu de opcoes a seguir, receba a opcao do usuario e os dados necessarios
para executar cada operacao.
Menu de opcoes:
1. Somar dois numeros.
2. Raiz quadrada de um numero.
Digite a opcao desejada.
*/
int main()
{
    float op, n1, n2, soma, raiz;
    printf("--Menu de opcoes--\n1. Somar dois numeros\n2. Raiz quadrada de um numero\nDigite a opcao desejada\n");
    scanf("%f%*c", &op);
    if (op == 1)
    {
        printf("Digite o primeiro numero\n");
        scanf("%f%*c", &n1);
        printf("Digite o segundo numero\n");
        scanf("%f%*c", &n2);
        soma = n1 + n2;
        printf("A soma dos numeros e %.0f\n", soma);
    }
    else if (op == 2)
    {
        printf("Digite um numero para ter sua raiz\n");
        scanf("%f%*c", &n1);
        raiz = sqrt(n1);
        printf("A raiz quadrada de %.0f e %.2f\n", n1, raiz);
    }
    else
        printf("Opcao invalida\n");
    return 0;
}