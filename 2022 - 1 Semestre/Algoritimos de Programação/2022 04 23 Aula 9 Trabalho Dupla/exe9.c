#include <stdio.h>

int main()
{
    float av1, av2, av3, media;
    printf("Digite a nota da Avaliacao 1\n");
    scanf("%f%*c", &av1);
    printf("Digite a nota da Avaliacao 2\n");
    scanf("%f%*c", &av2);
    printf("Digite a nota da Avaliacao 2\n");
    scanf("%f%*c", &av3);
    media=(av1+av2+av3)/3;
    if ((media >= 9.0) && (media <= 10)){
        printf("Media %.1f, Conceito A", media);
    }
    else if ((media >= 7.5) && (media < 9.0)){
        printf("Media %.1f, Conceito B", media);
    }
    else if ((media >= 6.0) && (media < 7.5)){
        printf("Media %.1f, Conceito C", media);
    }
    else if ((media >= 4.0) && (media < 6.0)){
        printf("Media %.1f, Conceito D", media);
    }
    else if (media < 4.0){
        printf("Media %.1f, Conceito E", media);
    }
    else{
        printf("Dados invalidos");
    }
    return 0;
}