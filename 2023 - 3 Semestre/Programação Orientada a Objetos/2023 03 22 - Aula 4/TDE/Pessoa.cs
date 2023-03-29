class Pessoa
{
    public int Id { get; set; }
    public string Nome { get; set; }
    public string Telefone { get; set; }

    public Pessoa(int id, string nome, string telefone)
    {
        Id = id;
        Nome = nome;
        Telefone = telefone;
    }

    public override string ToString()
    {
        return $"ID: {Id}, Nome: {Nome}, Telefone: {Telefone}";
    }
}