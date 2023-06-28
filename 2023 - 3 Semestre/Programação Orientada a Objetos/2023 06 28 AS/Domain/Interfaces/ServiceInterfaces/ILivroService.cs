using Domain.Entities;

namespace Domain.Interfaces
{
    public interface ILivroService : IDisposable
    {
        Task<bool> Add(Livro livro);
        Task<bool> Update(Livro livro);
        Task<bool> Remove(int id);
        // Task<bool> UpdateAutor(Autor autor);
    }
}