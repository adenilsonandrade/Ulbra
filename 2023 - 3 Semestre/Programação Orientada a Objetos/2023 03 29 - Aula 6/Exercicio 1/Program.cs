using System;

public class Program
{
    public static void Main()
    {
        Cachorro cachorro = new Cachorro();
        cachorro.Nome = "Dean";
        Console.WriteLine(cachorro.Nome);
        cachorro.Falar();

        Gato gato = new Gato();
        gato.Nome = "Mili";
        Console.WriteLine(gato.Nome);
        gato.Falar();
    }
}