public class Main {
    public static void main(String[] args) {
        Relogio relogio = new Relogio();
        relogio.acertarRelogio(3, 6, 10);
        System.out.println("Ponteiro Hora atual: " + relogio.lerHora());
        System.out.println("Ponteiro Minuto atual: " + relogio.lerMinuto());
        System.out.println("Ponteiro Segundo atual: " + relogio.lerSegundo());
    }
}