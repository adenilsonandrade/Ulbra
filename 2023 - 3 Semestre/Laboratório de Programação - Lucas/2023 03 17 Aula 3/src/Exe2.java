public class Exe2 {
    int num;
    int primo = 1;

    int verificaPrimo() {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        } return primo;
    }
}