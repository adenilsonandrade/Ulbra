public class Exe1 {
    int num;
    int i = 1;
    int soma = 0;

    int somaNaturais() {
        while (i <= num) {
            soma = soma + i;
            i++;
        }
        return soma;
    }
}
