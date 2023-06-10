public class Bateria implements Carregavel, Descarregavel{
    @Override
    public void carga() {
        System.out.println("Bateria Carregando");
    }

    @Override
    public void descarga() {
        System.out.println("Bateria Descarregando");
    }
}
