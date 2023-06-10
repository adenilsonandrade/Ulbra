public class Fatura implements Pagavel {
    private double valor;
    private boolean pago;

    public Fatura(double valor) {
        this.valor = valor;
        this.pago = false;
    }

    @Override
    public void pagar() {
        System.out.println("Fatura sendo paga no valor de " + valor + " reais.");
        this.pago = true;
    }

    @Override
    public boolean verificarPagamento() {
        return pago;
    }
}