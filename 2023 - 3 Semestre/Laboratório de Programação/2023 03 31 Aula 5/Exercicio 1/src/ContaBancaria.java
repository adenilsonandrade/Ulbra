public class ContaBancaria {
    public int numeroDaConta;
    public double saldo;
    public String titular;

    double Depositar(double deposito){
        saldo = saldo + deposito;
        return saldo;
    }
    double Sacar(double saque){
        saldo = saldo - saque;
        return saldo;
    }
    void Transferir(double valor, ContaBancaria conta){
        saldo = saldo - valor;
        conta.saldo += valor;

    }
}
