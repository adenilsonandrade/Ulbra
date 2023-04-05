class Program
{
    static void Main(string[] args)
    {
        Veiculo veiculo = new Veiculo();
        veiculo.Acelerar();

        Carro carro = new Carro();
        carro.Acelerar();

        Moto moto = new Moto();
        moto.Acelerar();
    }
}