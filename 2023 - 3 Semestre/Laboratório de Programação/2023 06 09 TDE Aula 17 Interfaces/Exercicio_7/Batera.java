public class Batera implements Musical {
    @Override
    public void tocar() {
        System.out.println("A bateria está tocando.");
    }

    @Override
    public void parar() {
        System.out.println("A bateria parou de tocar.");
    }

    @Override
    public void pausar() {
        System.out.println("A bateria foi pausada.");
    }
}