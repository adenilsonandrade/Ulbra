using System;

class Personagem
{
    public string Nome { get; set; }
    public int Forca { get; set; }
    public int Inteligencia { get; set; }
    public string[] Poderes { get; set; }

    public virtual void Lutar()
    {
        Console.WriteLine("Lutando como um personagem!");
    }
}