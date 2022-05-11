#include <stdio.h>
/*15. Uma agencia bancaria possui dois tipos de investimentos, conforme o quadro a seguir. Faca um programa que receba o tipo de investimento e seu valor e que calcule e mostre o valor corrigido, de acordo com o tipo de investimento.
Tipo        Descricao            Rendimento mensal
  1         poupanca                    3%
  2         Fundos renda fixa           4%
*/
int main()
{
    float poup, fix, din;
    int valor;
    printf("Escolha o tipo de investimento:\n1 Poupanca\n2 Fundos de renda fixa\n");
    scanf("%d%*c", &valor);
    switch (valor){
    case 1:{
        printf("Digite o valor do investimento\nR$ ");
        scanf("%f%*c", &din);
        poup=(din*0.03)+din;
        printf("O valor corrigido do investimento apos 1 mes e de R$ %.2f", poup);
        break;
    }
    case 2:{
        printf("Digite o valor do investimento\nR$ ");
        scanf("%f%*c", &din);
        fix=(din*0.04)+din;
        printf("O valor corrigido do investimento apos 1 mes e de R$ %.2f", fix);
        break;
    }
    default:
    printf("Opcao invalida");
    }
    return 0;
}
 