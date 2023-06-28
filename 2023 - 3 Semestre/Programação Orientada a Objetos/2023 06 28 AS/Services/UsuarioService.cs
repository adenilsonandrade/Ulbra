using Domain.Entities;
using Domain.Interfaces;
using Domain.Entities.Validations;

namespace Services
{
    public class UsuarioService : BaseService, IUsuarioService
    {
        private readonly IUsuarioRepository _usuarioRepository;
        private readonly ILivroRepository _livroRepository;
        private readonly IUnitOfWork _unitOfWork;

        public UsuarioService(IUsuarioRepository usuarioRepository, ILivroRepository livroRepository, IUnitOfWork unitOfWork)
        {
            _usuarioRepository = usuarioRepository;
            _livroRepository = livroRepository;
            _unitOfWork = unitOfWork;
        }

        public async Task<bool> Add(Usuario usuario)
        {
            if (!ExecutarValidacao(new UsuarioValidation(), usuario)) return false;

            _usuarioRepository.Save(usuario);
            await _unitOfWork.Commit();
            return true;
        }

        public async Task<bool> Remove(int id)
        {
            var wasRemoved = _usuarioRepository.Delete(id);

            if (wasRemoved)
            {
                await _unitOfWork.Commit();
                return true;
            }
            else
                return false;
        }

        public async Task<bool> Update(Usuario usuario)
        {
            if (!ExecutarValidacao(new UsuarioValidation(), usuario)) return false;

            _usuarioRepository.Update(usuario);
            await _unitOfWork.Commit();
            return true;
        }

        public void Dispose()
        {
            _usuarioRepository?.Dispose();
            _livroRepository?.Dispose();
        }
    }
}