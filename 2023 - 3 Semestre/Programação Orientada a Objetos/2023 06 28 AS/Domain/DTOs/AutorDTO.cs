namespace Domain.DTOs
{
    public class AutorDTO
    {
        public int Id { get; set; }
        public string Nome { get; set; }
        public string Email { get; set; }

        /* EF Relations */
        public IList<LivroDTO> Livros { get; set; }
    }
}