#include <stdio.h>

/*
Exercico 7)
Faca um programa que receba quatro valores: I, A, B e C. Desses valores, I e inteiro e positivo, A, B e C sao reais. Escreva os numeros A, B e C obedecendo a tabela a seguir.
Suponha que o valor digitado para I seja sempre um valor valido, ou seja, 1, 2 ou 3, e que os numeros digitados sejam diferentes um do outro.

VALOR DE I  |   FORMA DE ESCREVER
     1      |   A, B e C em ordem crescente
     2      |   A, B e C em oredem decrescente
     3      |   O maior fica entre os outros dois numeros
*/

int main()
{
     float a, b, c;
     int valor;
     printf("Digite um valor para A\n");
     scanf("%f%*c", &a);
     system("cls");
     printf("Digite um valor para B\n");
     scanf("%f%*c", &b);
     system("cls");
     printf("Digite um valor para C\n");
     scanf("%f%*c", &c);
     system("cls");
     printf("A = %.2f, B = %.2f, C = %.2f\n\n", a, b, c);
     printf("Digite 1 para organizar de forma crescente\n");
     printf("Digite 2 para organizar de forma decrescente\n");
     printf("Digite 3 para o maior ficar entre os outros dois numeros\n\n");
     scanf("%d%*c", &valor);
     switch (valor){
     case 1:{

          if ((a < b) && b < c)
               printf("A ordem crescente dos numeros e A = %.2f, B = %.2f e C = %.2f\n", a, b, c);
          else if ((a < c) && c < b)
               printf("A ordem crescente dos numeros e A = %.2f, C = %.2f e B = %.2f\n", a, c, b);
          else if ((b < a) && a < c)
               printf("A ordem crescente dos numeros e B = %.2f, A = %.2f e C = %.2f\n", b, a, c);
          else if ((b < c) && c < a)
               printf("A ordem crescente dos numeros e B = %.2f, C = %.2f e A = %.2f\n", b, c, a);
          else if ((c < a) && a < b)
               printf("A ordem crescente dos numeros e C = %.2f, A = %.2f e B = %.2f\n", c, a, b);
          else if ((c < b) && b < a)
               printf("A ordem crescente dos numeros e C = %.2f, B = %.2f e A = %.2f\n", c, b, a);
               break;
     }
     case 2:{

          if ((a > b) && b > c)
               printf("A ordem decrescente dos numeros e A = %.2f, B = %.2f e C = %.2f\n", a, b, c);
          else if ((a > c) && c > b)
               printf("A ordem decrescente dos numeros e A = %.2f, C = %.2f e B = %.2f\n", a, c, b);
          else if ((b > a) && a > c)
               printf("A ordem decrescente dos numeros e B = %.2f, A = %.2f e C = %.2f\n", b, a, c);
          else if ((b > c) && c > a)
               printf("A ordem decrescente dos numeros e B = %.2f, C = %.2f e A = %.2f\n", b, c, a);
          else if ((c > a) && a > b)
               printf("A ordem decrescente dos numeros e C = %.2f, A = %.2f e B = %.2f\n", c, a, b);
          else if ((c > b) && b > a)
               printf("A ordem decrescente dos numeros e C = %.2f, B = %.2f e A = %.2f\n", c, b, a);
               break;
     }
     case 3:{

          if ((a < b) && b < c)
               printf("A = %.2f, C = %.2f, B = %.2f\n", a, c, b);
          else if ((a < c) && c < b)
               printf("A = %.2f, B = %.2f, A = %.2f\n", a, b, c);
          else if ((b < a) && a < c)
               printf("B = %.2f, C = %.2f, A = %.2f\n", b, c, a);
          else if ((b < c) && c < a)
               printf("B = %.2f, A = %.2f, C = %.2f\n", b, a, c);
          else if ((c < a) && a < b)
               printf("C = %.2f, B = %.2f, A = %.2f\n", c, b, a);
          else if ((c < b) && b < a)
               printf("C = %.2f, A = %.2f, B = %.2f\n", c, a, b);
               break;
     }
     default:
          printf("Opcao invalida");
     }
     return 0;
}