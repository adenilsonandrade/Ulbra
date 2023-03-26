public class Main {
    public static void main(String[] args) {

        Quadrado quadrado = new Quadrado();
        quadrado.lado = 13;
        double resultadoDaAreaDoQuadrado = quadrado.calcularArea();
        System.out.println("A área do quadrado é " + resultadoDaAreaDoQuadrado);

        Triangulo triangulo = new Triangulo();
        triangulo.a = 26;
        triangulo.b = 45;
        double resultadoDaAreaDoTriagulo = triangulo.calcularArea();
        System.out.println("A área do triângulo é " + resultadoDaAreaDoTriagulo);

        Circunferencia circunferencia = new Circunferencia();
        circunferencia.raio = 12;
        double resultadoAreaDaCircunferencia = circunferencia.calcularArea();
        System.out.println("A área da circunferência é " + resultadoAreaDaCircunferencia);

        Trapezio trapezio = new Trapezio();
        trapezio.altura = 10;
        trapezio.baseMenor = 8;
        trapezio.baseMaior = 13;
        double resutadoAreaDoTrapezio = trapezio.calcularArea();
        System.out.println("A área do trapézio é " + resutadoAreaDoTrapezio);
    }
}
