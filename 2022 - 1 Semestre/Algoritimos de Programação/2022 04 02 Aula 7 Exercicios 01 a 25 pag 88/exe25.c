#include <stdio.h>
/*
25. Uma empresa decidiu dar uma gratificacao de Natal a seus funcionarios, baseada no numero de horas extras e no numero de horas que o funcionario faltou ao trabalho. O valor do premio e obtido pela consulta a tabela que segue, na qual:
H = numero de horas extras - (2/3 * (numero de horas-falta))
    H(minutos)             Premio
    >2.400                 500.00
1.800 ●---○ 2.400          400.00
1.200 ●---● 1.800          300.00
  600 ●---○ 1.200          200.00
    < 600                  100.00
*/
int main()
{
    float minuto, horas, horaExtra, horaFalta;
    printf("Digite o numero de horas extras\n");
    scanf("%f%*c", &horaExtra);
    printf("Digite o numero de horas-falta\n");
    scanf("%f%*c", &horaFalta);
    horas = horaExtra - (0.66 * (horaFalta));
    minuto = horas * 60;
    if (minuto > 2400)
        printf("Premio: R$ 500.00 %.2f", horas);
    else if (minuto >= 1800 && minuto < 2400)
        printf("Premio: R$ 400.00 %.2f", horas);
    else if (minuto >= 1200 && minuto < 1800)
        printf("Premio: R$ 300.00 %.2f", horas);
    else if (minuto >= 600 && minuto < 1200)
        printf("Premio: R$ 200.00 %.2f", horas);
    else if (minuto < 600)
        printf("Premio: R$ 100.00 %.2f", horas);
    return 0;
}