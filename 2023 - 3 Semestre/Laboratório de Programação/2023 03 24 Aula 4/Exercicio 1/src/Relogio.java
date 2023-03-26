public class Relogio {
    Ponteiro ponteiroHora;
    Ponteiro ponteiroMinuto;
    Ponteiro ponteiroSegundo;

    public Relogio() {
        ponteiroHora = new Ponteiro();
        ponteiroMinuto = new Ponteiro();
        ponteiroSegundo = new Ponteiro();
    }

    public void acertarRelogio(int hora, int minuto, int segundo) {
        ponteiroHora.setPosicao(hora);
        ponteiroMinuto.setPosicao(minuto);
        ponteiroSegundo.setPosicao(segundo);
    }

    public int lerHora() {
        return ponteiroHora.getPosicao();
    }

    public int lerMinuto() {
        return ponteiroMinuto.getPosicao() * 5;
    }

    public int lerSegundo() {
        return ponteiroSegundo.getPosicao() * 5;
    }
}

