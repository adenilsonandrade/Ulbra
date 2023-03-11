/*
3 - Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o segundo ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:
- Se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir mensagem 'Código inexistente';
- Cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível, escreve a mensagem 'Não temos estoque suficiente desta mercadoria'. Se puder atendê-lo, escrever a mensagem 'Pedido atendido. Obrigado e volte sempre';
- Efetuar a atualização do estoque somente se o pedido for atendido integralmente;
- No final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.
*/
#include <stdio.h>
#include <windows.h>
int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int codProduto[]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int quantidade[]{15, 15, 15, 15, 15, 15, 15, 15, 15, 15};
    int venda;
    int estoque;
    int codCliente;
    int codDigitado;
    int i = 0;
    do{
        printf("\nDigite o codigo de cliente:\n");
        scanf("%d%*c", &codCliente);
        if (codCliente == 0)
            break;
        do{
            printf("Digite o codigo do Produto:\n");
            scanf("%d%*c", &codDigitado);
            i = 0;
            do{
                if (codDigitado == codProduto[i])
                    break;
                i++;
            } while (codDigitado != codProduto[i] && i < 10);
            if (codDigitado != codProduto[i])
                printf("Codigo inexistente\n");
        } while (codDigitado != codProduto[i]);
        do{
            printf("Digite a quantidade:\n");
            estoque = quantidade[i];
            venda = 0;
            scanf("%d%*c", &venda);
            quantidade[i] = quantidade[i] - venda;
            estoque = quantidade[i];
            if (quantidade[i] < 0){
                printf("Nao temos estoque suficiente desta mercadoria codigo %d\nZero encerra sem efetuar a compra\n", codProduto[i]);
                quantidade[i] += venda;
            }
        } while (estoque < 0);
        if (venda != 0)
            printf("Pedido atendido. Obrigado e volte sempre\n\n");
        i = 0;
    } while (codCliente != 0);
    printf("     --Estoque atualizado:--\n  Nº:    Cod produto:   Qtidade:\n");
    do{
        if (i < 9)
            printf("   %d           %d           %d\n", i + 1, codProduto[i], quantidade[i]);
        if (i >= 9)
            printf("  %d          %d           %d\n", i + 1, codProduto[i], quantidade[i]);
        i++;
    } while (i < 10);
    return 0;
}