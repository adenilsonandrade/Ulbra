namespace Domain.Interfaces
{
    public interface IUnitOfWork
    {
        Task Commit();

        IAutorRepository AutorRepository { get; }
        ILivroRepository LivroRepository { get; }
        IUsuarioRepository UsuarioRepository { get; }
    }
}