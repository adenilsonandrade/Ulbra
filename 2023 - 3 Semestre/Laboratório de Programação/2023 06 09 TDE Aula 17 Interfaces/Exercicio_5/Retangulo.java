public class Retangulo implements FormaGeometrica{
    double altura = 0;
    double largura = 0;

    public Retangulo(double altura, double largura) {
        this.altura = altura;
        this.largura = largura;
    }
    @Override
    public double calcularArea() {
        return largura * altura;
    }

    @Override
    public double calcularPerimetro() {
        return (largura * 2) + (altura * 2);
    }
}