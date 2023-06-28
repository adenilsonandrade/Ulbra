namespace Domain.Entities
{
    public class Usuario : Entity
    {
        public string Nome { get; set; }
        public string Email { get; set; }
        public List<Livro> Livros { get; set; }
    }
}