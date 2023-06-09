public class Main {
    public static void main(String[] args) {
        // Exercicio 1
        int[] numeros = {1, 2, 3, 4, 5};

        for (int i = 0; i < numeros.length; i++) {
            System.out.println(numeros[i]);
        }

        // Exercicio 2
        double[] notas = {8.5, 7.0, 9.0, 6.5, 10.0};
        double soma = 0;

        for (int i = 0; i < notas.length; i++) {
            soma += notas[i];
        }
        double media = soma / notas.length;
        System.out.println("A média das notas é: " + media);

        // Exercicio 3
        int[] valores = {23, 1, 34, 89, 2};
        int maior = valores[0];

        for (int i = 1; i < valores.length; i++) {
            if (valores[i] > maior) {
                maior = valores[i];
            }
        }

        System.out.println("O maior número é: " + maior);

        // Exercicio 4
        String[] cores = {"vermelho", "azul", "verde", "amarelo", "roxo"};

        for (int i = cores.length - 1; i >= 0; i--) {
            System.out.println(cores[i]);
        }

        // Exercicio 5
        int[] numerosImpares = new int[10];
        int contador = 1;

        for (int i = 0; i < numerosImpares.length; i++) {
            numerosImpares[i] = contador;
            contador += 2;
        }

        for (int i = 0; i < numerosImpares.length; i++) {
            System.out.println(numerosImpares[i]);
        }
    }
}