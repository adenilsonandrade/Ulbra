#include <stdio.h>
/*
20. Faca um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir. Para idade inferior a 5, devera mostrar mensagem.
Categoria           Idade
Infantil            5 a 7
Juvenil             8 a 10
Adolescente         11 a 15
Adulto              16 a 30
Senior              Acima de 30
*/
int main()
{
    float idade;
    printf("Digite a idade do nadador\n");
    scanf("%f%*c", &idade);
    if (idade < 5){
        printf("Sem categora");
    }
    else if (idade >= 5 && idade <= 7){
        printf("Infantil");
    }
    else if (idade >= 8 && idade <= 10){
        printf("Juvenil");
    }
    else if (idade >= 11 && idade <= 15){
        printf("Adolescente");
    }
    else if (idade >= 16 && idade <= 30){
        printf("Juvenil");
    }
    else if (idade > 30){
        printf("Senior");
    }
    else
        printf("Dados invalidos");
    return 0;
}