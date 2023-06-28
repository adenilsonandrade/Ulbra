namespace Domain.DTOs
{
    public class LivroDTO
    {
        public int Id { get; set; }
        public string Titulo { get; set; }
        public string ISBN { get; set; }
        public string AnoPublicacao { get; set; }

        /* EF Relations */
        public IList<AutorDTO> Autores { get; set; }
    }
}