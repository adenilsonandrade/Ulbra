using Domain.Entities;

namespace Domain.Interfaces
{
    public interface IAutorService : IDisposable
    {
        Task<bool> Add(Autor autor);
        Task<bool> Update(Autor autor);
        Task<bool> Remove(int id);
    }
}