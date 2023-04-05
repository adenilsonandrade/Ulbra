
public class Main {
    public static void main(String[] args) {

        Calculadora calculadora = new Calculadora();
        System.out.println("O resultado da soma é: " + calculadora.Somar(15, 25));
        System.out.println("O resuldado da subtração é: " + calculadora.Subtrair(52, 17));
        System.out.println("O resultado da multiplicação é: " + calculadora.Multiplicar(15, 5));
        System.out.println("O resuldado da divisão é: " + calculadora.Dividir(65, 5));

        Retangulo retangulo = new Retangulo();
        System.out.println("A área do retangulo é:" + retangulo.CalcularArea(10, 14));
        System.out.println("O perimetro do retangulo é:" + retangulo.CalcularPerimetro(10, 14));

        ContaBancaria contaBancaria1 = new ContaBancaria();
        contaBancaria1.numeroDaConta = 1;
        contaBancaria1.titular = "Adenilson";
        contaBancaria1.saldo = 1500;
        contaBancaria1.Depositar(750);
        System.out.println("O saldo de " + contaBancaria1.titular + " é de: R$ " + contaBancaria1.saldo);

        ContaBancaria contaBancaria2 = new ContaBancaria();
        contaBancaria2.numeroDaConta = 2;
        contaBancaria2.titular = "Fulano";
        contaBancaria2.saldo = 1000;
        contaBancaria2.Transferir(850, contaBancaria1);
        System.out.println("O saldo da conta " + contaBancaria1.numeroDaConta + " de " + contaBancaria1.titular + " após receber transferencia é de: " + contaBancaria1.saldo);
        System.out.println("O saldo da conta " + contaBancaria2.numeroDaConta + " de " + contaBancaria2.titular + " é de: " + contaBancaria2.saldo);
    }
}