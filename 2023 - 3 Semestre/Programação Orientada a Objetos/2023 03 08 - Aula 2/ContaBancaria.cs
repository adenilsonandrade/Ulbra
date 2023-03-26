public class ContaBancaria {
    public double Saldo { get; set; }
    public int Numero { get; set; }

    public void Depositar(double valor) {
        Saldo += valor;
    }

    public void Sacar(double valor) {
        if (Saldo >= valor) {
            Saldo -= valor;
        }
        else {
            Console.WriteLine("Saldo insuficiente.");
        }
    }
}