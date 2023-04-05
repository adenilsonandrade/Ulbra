class Program
{
    static void Main(string[] args)
    {
        Personagem homemDeFerro = new Heroi
        {
            Nome = "Homem de Ferro",
            Forca = 5,
            Inteligencia = 10,
            Poderes = new string[] { "Inteligência" }
        };

        Personagem thanos = new Vilao
        {
            Nome = "Thanos",
            Forca = 10,
            Inteligencia = 7,
            Poderes = new string[] { "Força" }
        };


        Console.WriteLine(homemDeFerro.Nome);
        homemDeFerro.Lutar();

        Console.WriteLine(thanos.Nome);
        thanos.Lutar();
    }
}