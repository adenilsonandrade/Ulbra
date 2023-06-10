public class Cheque implements Pagavel {
    private double valor;
    private boolean pago;

    public Cheque(double valor) {
        this.valor = valor;
        this.pago = false;
    }

    @Override
    public void pagar() {
        System.out.println("Cheque sendo utilizado para pagamento no valor de " + valor + " reais.");
        this.pago = true;
    }

    @Override
    public boolean verificarPagamento() {
        return pago;
    }
}