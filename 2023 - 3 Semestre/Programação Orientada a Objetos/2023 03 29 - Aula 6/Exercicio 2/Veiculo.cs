using System;

class Veiculo
{
    public string Modelo { get; set; }

    public virtual void Acelerar()
    {
        Console.WriteLine("Acelerando veículo!");
    }
}

class Carro : Veiculo
{
    public override void Acelerar()
    {
        Console.WriteLine("Acelerando carro!");
    }
}

class Moto : Veiculo
{
    public override void Acelerar()
    {
        Console.WriteLine("Acelerando moto!");
    }
}