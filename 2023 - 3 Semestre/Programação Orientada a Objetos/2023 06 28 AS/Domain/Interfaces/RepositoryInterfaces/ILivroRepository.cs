using Domain.Entities;

namespace Domain.Interfaces
{
    public interface ILivroRepository : IBaseRepository<Livro>
    {
        // Task<Livro> ObterLivroComAutoresAsync(int livroId);
    }
}