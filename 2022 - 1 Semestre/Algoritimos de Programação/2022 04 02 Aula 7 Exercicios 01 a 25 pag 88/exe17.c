#include <stdio.h>
/*
Faca um programa que verifique a validade de uma senha fornecida pelo usuario. A senha e 4531. O programa deve mostrar uma mensagem de permissao de acesso ou nao.
*/
int main()
{
    float senha;
    printf("digite a senha\n");
    scanf("%f%*c", &senha);
    if (senha == 4531)
        printf("Acesso permitido");
    else
    printf("Acesso negado");
    return 0;
}