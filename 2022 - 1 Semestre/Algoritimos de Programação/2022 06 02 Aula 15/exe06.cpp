/*
6 - Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor. Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor. Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na loja. Calcule e mostre:
- um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
- o total de vendas de todos os vendedores;
- o maior valor a receber e o nome de quem o receberá;
- o menor valor a receber e o nome de quem o receberá.
*/
#include <stdio.h>
#include <windows.h>
#include <strings.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float totalVendas;
    float comissoes[10];
    char nomes[10][10];
    float venda[10];
    int percentual = 3;
    int i = 0;
    int j = 0;
    float maiorVenda = 0;
    int vendedorMaiorVenda[10];
    float menorVenda = 0;
    int vendedorMenorVenda[10];
    do
    {
        printf("Digite o total de vendas do vendedor %d:\n", i + 1);
        scanf("%f%*c", &venda[i]);
        printf("Digite o nome do vendedor %d:\n", i + 1);
        scanf("%s%*c", nomes[i]);
        totalVendas += venda[i];
        comissoes[i] = (venda[i] * percentual) / 100;
        if (maiorVenda < venda[i])
        {
            maiorVenda = venda[i];
            {
                for (j = 0; j < 10; j++)
                {
                    vendedorMaiorVenda[j] = 0;
                }
                vendedorMaiorVenda[j] = 1;
            }
            if (menorVenda > venda[i])
            {
                menorVenda == venda[i];
                for (j = 0; j < 10; j++)
                {
                    vendedorMenorVenda[j] = 0;
                }
                vendedorMenorVenda[j] = 1;
            }
        }
        i++;
    } while (i < 10);
    printf("          Relatorio vendas:\n Nº    Nome:           Vendas:          Comissão");
    for (i = 0; i < 10; i++)
    {
        j++;
        printf("\n%d     %s          %.2f          %.2f", i + 1, nomes[i], venda[i], comissoes[i]);
        if (vendedorMaiorVenda[j] == 1)
            printf("   maior venda");
        if (vendedorMenorVenda[j] == 1)
            printf("   menor venda");
    }
    return 0;
}