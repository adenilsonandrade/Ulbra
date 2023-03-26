public class Main {
    public static void main(String[] args) {

        // Exercício 1
        Exe1 exe1 = new Exe1();
        exe1.num = 32;
        int resultadoSoma = exe1.somaNaturais();
        System.out.println("A soma dos números naturais ate " + exe1.num + " é " + resultadoSoma);

        // Exercício 2
        Exe2 exe2 = new Exe2();
        exe2.num = 41;
        int resultadoPrimo = exe2.verificaPrimo();
        {
            if (resultadoPrimo == 1) {
                System.out.println("O número " + exe2.num + " é primo");
            } else {
                System.out.println("O número " + exe2.num + " não é primo");
            }
        }

        // Exercício 3
        Exe3 exe3 = new Exe3();
        exe3.num = 9;
        System.out.println("A tabuada do " + exe3.num + " é a seguinte:");
        exe3.tabuada();

        // Exercício 4
        Exe4 exe4 = new Exe4();
        exe4.num = 9;
        System.out.println("Os números pares de 0 a " + exe4.num + " são:");
        exe4.pares();

        // Exercício 5
        Exe5 exe5 = new Exe5();
        exe5.num = 10;
        System.out.println("Os números impares de 0 a " + exe5.num + " são:");
        exe5.impares();
    }
}