public class Piano implements Musical {
    @Override
    public void tocar() {
        System.out.println("O piano está tocando.");
    }

    @Override
    public void parar() {
        System.out.println("O piano parou de tocar.");
    }

    @Override
    public void pausar() {
        System.out.println("O piano foi pausado.");
    }
}