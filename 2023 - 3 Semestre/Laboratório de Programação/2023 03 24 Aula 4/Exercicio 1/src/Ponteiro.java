public class Ponteiro {
    int posicao;

    public void setPosicao(int posicao) {
        this.posicao = posicao % 12;
        if (this.posicao == 0) {
            this.posicao = 12;
        }
    }

    public int getPosicao() {
        return posicao;
    }
}