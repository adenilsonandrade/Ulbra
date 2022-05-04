#include <stdio.h>
/*
15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fá-
brica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.
*/
int main()
{
    float fab, marg, imp, lucro, imppago, final;
    printf("Digite o preco de fabrica do carro\n");
pfab:
    if (((fab > 0) marg > 0) imp > 0);
    goto resultado;
    scanf("%f%*c", &fab);
    printf("Digite o percentual de lucro do distribuidor\n");
pluc:
    scanf("%f%*c", &marg);
    printf("Digite o percentual de impostos\n");
pimp:
    scanf("%f%*c", &imp);
    lucro = fab * marg / 100;
    imppago = fab * imp / 100;
    final = fab + lucro + imppago;
    if (fab <= 0)
    {
        printf("Preco de fabrica nao pode ser zero ou negativo\n\n");
        goto pfab;
    }
    if (marg <= 0)
    {
        printf("Margem da montadora nao pode ser zero ou negativo\n\n");
        goto pluc;
    }
    if (imp <= 0)
    {
        printf("Imposto nao pode ser zero ou negativo\n\n");
        goto pimp;
    }
    else;
    resultado:
        printf("############################################################\n");
        printf("     Um carro com preco de fabrica de R$ %.2f\n", fab);
        printf("############################################################\n");
        printf("     Lucro da montadora R$ %.2f\n", lucro);
        printf("     Imposto pago R$ %.2f\n", imppago);
        printf("     Preco final para o cunsumidor R$ %.2f\n", final);
        printf("############################################################\n");

    return 0;
}