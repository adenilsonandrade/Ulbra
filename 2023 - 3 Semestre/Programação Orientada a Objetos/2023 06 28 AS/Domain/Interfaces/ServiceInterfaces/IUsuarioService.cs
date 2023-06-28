using Domain.Entities;

namespace Domain.Interfaces
{
    public interface IUsuarioService : IDisposable
    {
        Task<bool> Add(Usuario usuario);
        Task<bool> Update(Usuario usuario);
        Task<bool> Remove(int id);
    }
}