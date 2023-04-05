public class Retangulo {
    public int altura;
    public int base;

    int CalcularArea(int altura, int base){
        return altura * base;
    }
    int CalcularPerimetro(int altura, int base){
        return (altura * 2) + (base * 2);
    }
}
