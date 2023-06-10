public class Superman implements Voador{
    @Override
    public void decolar() {
        System.out.println("Superman Decolando");
    }

    @Override
    public void voar() {
        System.out.println("Superman Voando");
    }

    @Override
    public void aterrar() {
        System.out.println("Superman Aterrando");
    }
}
