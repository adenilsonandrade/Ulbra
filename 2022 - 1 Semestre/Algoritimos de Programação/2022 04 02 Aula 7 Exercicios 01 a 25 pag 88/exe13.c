#include <stdio.h>
/*
13. Faca um programa que receba o preco de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preco e a classificacao.
Tabela 1 - Percentual de Aumento
Preco                       %
Ate R$ 50                   5
Entre R$ 50 e R$ 100        10
Acima de R$ 100             15

Tabela 2 - Classificacao
Novo Preco                              Cassificacao
Ate R$ 80                               Barato
Entre R$ 80 e R$ 120 (inclusive)        Normal
Entre R$ 120 e R$ 200 (inclusive)       Caro
Maior que R$ 200                        Muito caro
*/
int main()
{
    float preco, novopreco;
    printf("Digite o preco de um produto\nR$ ");
    scanf("%f%*c", &preco);
    if (preco >= 0.00 && preco <= 50.00){
        novopreco = (preco * 0.05) + preco;
        printf("O novo preco do produto e de R$ %.2f\n", novopreco);
        if (novopreco < 80.00){
            printf("Preco barato\n");
        }
    }
    else if (preco > 50.00 && preco < 100.00){
        novopreco = (preco * 0.10) + preco;
        printf("O novo preco do produto e de R$ %.2f\n", novopreco);
        if (novopreco <= 80.00){
            printf("Preco barato\n");
        }
        else if (novopreco > 80.00 && novopreco <= 120.00){
            printf("Preco normal\n");
        }
        else if (novopreco > 120.00 && novopreco <= 200.00){
            printf("Preco caro\n");
        }
    }
    else if (preco > 100.00){
        novopreco = (preco * 0.15) + preco;
        printf("O novo preco do produto e de R$ %.2f\n", novopreco);
        if (novopreco <= 120.00){
            printf("Preco normal\n");
        }
        else if (novopreco > 120.00 && novopreco <= 200.00){
            printf("Preco caro\n");
        }
        else if (novopreco > 200.00){
            printf("Preco muito caro\n");
        }
    }
    else
        printf("Dados invalidos");
    return 0;
}