public class Aviao implements Voador{
    @Override
    public void decolar() {
        System.out.println("Avião Decolando");
    }

    @Override
    public void voar() {
        System.out.println("Avião Voando");
    }

    @Override
    public void aterrar() {
        System.out.println("Avião Aterrando");
    }
}
