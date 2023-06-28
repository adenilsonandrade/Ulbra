using Domain.Entities;

namespace Domain.Interfaces
{
    public interface IAutorRepository : IBaseRepository<Autor>
    {
        // Task<Autor> ObterAutorComLivrosAsync(int livroId);
    }
}