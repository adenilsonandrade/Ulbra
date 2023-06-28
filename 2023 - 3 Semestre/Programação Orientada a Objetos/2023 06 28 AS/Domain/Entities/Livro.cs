namespace Domain.Entities
{
    public class Livro : Entity
    {
        public string Titulo { get; set; }
        public string ISBN { get; set; }
        public List<Autor> Autores { get; set; }
        public List<Usuario> Usuarios { get; set; }
        public string AnoPublicacao { get; set; }
    }
}