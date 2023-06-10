public class Deposito implements Pagavel {
    private double valor;
    private boolean pago;

    public Deposito(double valor) {
        this.valor = valor;
        this.pago = false;
    }

    @Override
    public void pagar() {
        System.out.println("Depósito sendo realizado no valor de " + valor + " reais.");
        this.pago = true;
    }

    @Override
    public boolean verificarPagamento() {
        return pago;
    }
}