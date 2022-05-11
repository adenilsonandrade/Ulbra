#include <stdio.h>
/*
24. Faca um programa que receba o preco, a categoria (1 - limpeza, 2 - alimentacao, 3 - vestuario) e a situcao (R - produtos que necessitam de refrigeramcao e N - produtos que nao necessitam de refrigeracao). Calcule e mostre:
- O valor do aumento, usando as regras que seguem.
_______________________________________________
Preco           Categoria         % de aumento
                    1                  5%
< = 25              2                  8%
                    3                  10%
_______________________________________________
                    1                  12%
> = 25              2                  15%
                    3                  18%
_______________________________________________

- O valor do imposto, usando as regras a seguir.
O produto que preencher pelo menos um dos seguintes requisitos pagara imposto equivalente a 5% do preco; caso contrario, pagara 8%. Os requisitos sao:
Categoria: 2
Situacao: R

- O novo preco, ou seja, o preco mais aumento menos imposto.
- A classificacao, usando as regras a seguir.
_______________________________________
Novo Preco              Classificacao
< = R$ 50,00            Barato
Entre 50 e 120          Normal
> = R$ 120,00           Caro
_______________________________________
*/
int main()
{
    float preco, aumento, imp, npreco;
    int cat;
    char sit[10];
    printf("Digite o preco do produto\nR$ ");
    scanf("%f%*c", &preco);
    printf("\nEscolha a categoria do produto:\n1 - Limpeza\n2 - Alimentacao\n3 - Vestuario\n");
    scanf("%d%*c", &cat);
    printf("\nEscolha:\nR - Produto que necessita de refrigeracao\nN - Produto que nao necessita refrigeracao\n");
    gets(sit);
    if (strcasecmp(sit, "R") == 0 || cat == 2){
        imp = preco * 0.05;
    }
    else{
        imp = preco * 0.08;
    }

    if (preco <= 25.00){
        switch (cat){
        case 1:{
            aumento = preco * 0.05;
            npreco = preco + aumento - imp;
            printf("\nO valor do aumento e de R$ %.2f\nO imposto e de R$ %.2f\nNovo preco do produto R$ %.2f\n", aumento, imp, npreco);
            break;
        }
        case 2:{
            aumento = preco * 0.08;
            npreco = preco + aumento - imp;
            printf("\nO valor do aumento e de R$ %.2f\nO imposto e de R$ %.2f\nNovo preco do produto R$ %.2f\n", aumento, imp, npreco);
            break;
        }
        case 3:{
            aumento = preco * 0.10;
            npreco = preco + aumento - imp;
            printf("\nO valor do aumento e de R$ %.2f\nO imposto e de R$ %.2f\nNovo preco do produto R$ %.2f\n", aumento, imp, npreco);
            break;
        }
            default:
            printf("Categoria invalida\n");
            break;
        }
    }
    else if (preco > 25.00){
        switch (cat){
        case 1:{
            aumento = preco * 0.12;
            npreco = preco + aumento - imp;
            printf("\nO valor do aumento e de R$ %.2f\nO imposto e de R$ %.2f\nNovo preco do produto R$ %.2f\n", aumento, imp, npreco);
            break;
        }
        case 2:{
            aumento = preco * 0.15;
            npreco = preco + aumento - imp;
            printf("\nO valor do aumento e de R$ %.2f\nO imposto e de R$ %.2f\nNovo preco do produto R$ %.2f\n", aumento, imp, npreco);
            break;
        }
        case 3:{
            aumento = preco * 0.18;
            npreco = preco + aumento - imp;
            printf("\nO valor do aumento e de R$ %.2f\nO imposto e de R$ %.2f\nNovo preco do produto R$ %.2f\n", aumento, imp, npreco);
            break;
        }
        default:
            printf("Categoria invalida\n");
            break;
        }
    }
    printf("Produto e ");
        if (npreco <= 50) {
          printf("BARATO");
        }
        else if (npreco > 50 && npreco <= 120) {
          printf("NORMAL");
        }
        else {
          printf("CARO");
        }
    return 0;
}