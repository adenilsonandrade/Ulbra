#include <stdio.h>
/*16. Uma empresa decide aplicar descontos nos seus precos usando a tabela a seguir. Faca um programa que receba o preco atual de um produto e seu codigo e que calcule e mostre o valor do desconto e o novo preco.
Preco atual                     % de desconto
Ate R$ 30.00                    Sem desconto
Entre R$ 30 e R$ 100            10%
Acima de R$ 100.00              15%
*/
int main()
{
    float preco, novopreco;
    printf("Digite o preco de um produto\nR$ ");
    scanf("%f%*c", &preco);
    if (preco <= 30.00){
        printf("O produto nao tem desconto");
    }
    else if (preco > 30.00 && preco <= 100.00){
        novopreco = preco - (preco * 0.10);
        printf("O novo preco do produto e de R$ %.2f", novopreco);
    }
    else if (preco > 100){
        novopreco = preco - (preco * 0.15);
        printf("O novo preco do produto e de R$ %.2f", novopreco);
    }
    else
        printf("Dados invalidos");
    return 0;
}