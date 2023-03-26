using System;

class Program
{
    static void Main(string[] args)
    {
        Calculadora minhaCalculadora = new Calculadora();

        int resultadoSoma = minhaCalculadora.Somar(21, 32);
        int resultadoSubtracao = minhaCalculadora.Subtrair(15, 12);

        Console.WriteLine($"O resultado da soma é: {resultadoSoma}");
        Console.WriteLine($"O resultado da subtração é: {resultadoSubtracao}");


        Pessoa pessoa1 = new Pessoa();
        pessoa1.Nome = "Adenilson";
        pessoa1.Idade = 35;
        pessoa1.Apresentar();


        ContaBancaria conta1 = new ContaBancaria();
        conta1.Numero = 123;
        conta1.Saldo = 1000.0;

        conta1.Depositar(500.0);
        Console.WriteLine($"Novo saldo: {conta1.Saldo}");

        conta1.Sacar(2000.0);
        Console.WriteLine($"Novo saldo: {conta1.Saldo}");

        conta1.Sacar(500.0);
        Console.WriteLine($"Novo saldo: {conta1.Saldo}");
    }
}