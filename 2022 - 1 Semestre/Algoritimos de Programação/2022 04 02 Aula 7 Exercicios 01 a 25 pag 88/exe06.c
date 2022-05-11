#include <stdio.h>
/*
6. Faca um programa que receba dois numeros e execute uma das operacoes listadas a seguir, de acordo com a escolha do usuario. Se for digitada uma opcao invalida, mostre mensagem de erro e termine a execucao do programa. As opcoes sao:
1 - O primeiro numero elevado ao segundo numero.
2 - Raiz quadrada de cada um dos numeros.
3 - Raiz cubica de cada um dos numeros.
*/
int main()
{
    float n1, n2, elev, rn1, rn2, cn1, cn2;
    int valor;
    printf("Digite n1\n");
    scanf("%f%*c", &n1);
    printf("Digite n2\n");
    scanf("%f%*c", &n2);
    printf("Digite a opcao desejada:\n1 - O primeiro numero elevado ao segundo numero.\n2 - Raiz quadrada de cada um dos numeros.\n3 - Raiz cubica de cada um dos numeros.\n");
    scanf("%d%*c", &valor);
    switch (valor){
    case 1:{
        elev = pow(n1, n2);
        printf("%.2f elevado a %.2f = %.2f", n1, n2, elev);
        break;
    }
    case 2:{
        rn1 = sqrt(n1);
        rn2 = sqrt(n2);
        printf("A raiz quadrada de %.2f = %.2f\nA raiz quadrada de %.2f = %.2f", n1, rn1, n2, rn2);
        break;
    }
    case 3:{
        cn1 = cbrt(n1);
        cn2 = cbrt(n2);
        printf("A raiz cubica de %.2f = %.2f\nA raiz cubica de %.2f = %.2f", n1, cn1, n2, cn2);
        break;
    }
    default:
        printf("Opcao invalida");
    }
    return 0;
}