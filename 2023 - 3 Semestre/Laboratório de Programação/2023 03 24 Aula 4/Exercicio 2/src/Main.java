public class Main {
    public static void main(String[] args) {
        Fracao f1 = new Fracao(2, 3);
        Fracao f2 = new Fracao(3, 4);
        Fracao f3 = new Fracao(1, 5);

        Fracao resultado = f1.multiplicar(f2);

        System.out.println(f1 + " x " + f2 + " = " + resultado);
    }
}