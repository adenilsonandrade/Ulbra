#include <stdio.h>
/*
23. Faca um programa que receba:
- O codigo do produto comprado;
- A quantidade comprada do produto.
Calcule e mostre:
- O preco unitario do produto comprado, seguindo a tabela 1;
- O preco total da nota;
- O valor do desconto, seguindo a tabela 2 e aplicado sobre o preco total da nota;
- O preco final da nota depois do desconto.
#### Tabela 1 ####              ################ Tabela 2 ###############
Codigo       Preco              Preco total da nota         % de desconto
1 a 10       R$ 10                  Ate R$ 250                   5%
11 a 20      R$ 15              Entre R$ 250 e R$ 500            10%
21 a 30      R$ 20                Acima de R$ 500                15%
31 a 40      R$ 30
*/
int main()
{
    float cod, qdade, compra, desconto, pfinal;
    printf("Digite o codigo do produto\n");
    scanf("%f%*c", &cod);
    printf("Digite a quantidade comprada do produto\n");
    scanf("%f%*c", &qdade);
    if (cod >= 1 && cod <= 10){
        compra = qdade * 10.00;
        printf("O valor unitario do produto e R$ 10.00\n");
        if (compra <= 250.00){
            desconto = (qdade * 10.00) * 0.05;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 250.00 && compra < 500.00){
            desconto = (qdade * 10.00) * 0.10;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 500.00){
            desconto = (qdade * 10.00) * 0.15;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else
            printf("Dados invalidos");
    }
    else if (cod >= 11 && cod <= 20){
        compra = qdade * 15.00;
        printf("O valor unitario do produto e R$ 15.00\n");
        if (compra <= 250.00){
            desconto = (qdade * 15.00) * 0.05;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 250.00 && compra < 500.00){
            desconto = (qdade * 15.00) * 0.10;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 500.00){
            desconto = (qdade * 15.00) * 0.15;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else
            printf("Dados invalidos");
    }
    else if (cod >= 21 && cod <= 30){
        compra = qdade * 20.00;
        printf("O valor unitario do produto e R$ 20.00\n");
        if (compra <= 250.00){
            desconto = (qdade * 20.00) * 0.05;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 250.00 && compra < 500.00){
            desconto = (qdade * 20.00) * 0.10;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 500.00){
            desconto = (qdade * 20.00) * 0.15;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else
            printf("Dados invalidos");
    }
    else if (cod >= 31 && cod <= 40){
        compra = qdade * 30.00;
        printf("O valor unitario do produto e R$ 30.00\n");
        if (compra <= 250.00){
            desconto = (qdade * 30.00) * 0.05;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 250.00 && compra < 500.00){
            desconto = (qdade * 30.00) * 0.10;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else if (compra > 500.00){
            desconto = (qdade * 30.00) * 0.15;
            pfinal = compra - desconto;
            printf("O valor total da compra e de R$ %.2f\nO desconto foi de R$ %.2f\nPreco final R$ %.2f", compra, desconto, pfinal);
        }
        else
            printf("Dados invalidos");
    }
    else
        printf("Dados invalidos");
    return 0;
}