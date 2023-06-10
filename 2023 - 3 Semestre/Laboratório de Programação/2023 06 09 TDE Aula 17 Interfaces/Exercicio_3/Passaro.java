public class Passaro implements Voador{
    @Override
    public void decolar() {
        System.out.println("Pássaro Decolando");
    }

    @Override
    public void voar() {
        System.out.println("Pássaro Voando");
    }

    @Override
    public void aterrar() {
        System.out.println("Pássaro Aterrando");
    }
}