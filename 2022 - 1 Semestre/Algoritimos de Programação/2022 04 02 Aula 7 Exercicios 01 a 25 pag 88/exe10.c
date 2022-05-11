#include <stdio.h>
/*
10. O preco, ao consumidor, de um carro novo e a soma do custo de fabrica com a porcentagem do distribuidor e com os impostos, ambos aplicados ao custo de fabrica. As porcentagens encontram-se na tabela a seguir. Faca um programa que receba o custo de fabrica de um carro e mostre o preco ao consumidor.
Custo de Fabrica              % do distribuidor       % dos impostos
Ate R$ 12.000                     5                        isento
Entre R$ 12.000 e R$ 25.000       10                        15
Acima de 25.000                   15                        20
*/
int main()
{
    float custo, lucro, imp, preco;
    printf("Digite o preco de fabrica de um carro\n");
    scanf("%f%*c", &custo);
    if (custo <= 12000.00){
        preco = (custo * 0.05) + custo;
        printf("1 O preco ao consumidor e de %.2f", preco);
    }
    else if (custo > 12000.00 && custo < 25000.00){
        preco = ((custo * 0.1) + custo * 0.15) + custo;
        printf("2 O preco ao consumidor e de %.2f", preco);
    }
    else if (custo >= 25000.00){
        preco = ((custo * 0.15) + custo * 0.20) + custo;
        printf("3 O preco ao consumidor e de %.2f", preco);
    }
    else printf("Dados invalidos");
    return 0;
}