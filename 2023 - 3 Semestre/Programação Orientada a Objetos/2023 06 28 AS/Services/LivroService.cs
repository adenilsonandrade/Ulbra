using Domain.Entities;
using Domain.Interfaces;
using Domain.Entities.Validations;

namespace Services
{
    public class LivroService : BaseService, ILivroService
    {
        private readonly ILivroRepository _livroRepository;
        private readonly IAutorRepository _autorRepository;
        private readonly IUnitOfWork _unitOfWork;

        public LivroService(ILivroRepository livroRepository, IAutorRepository autorRepository, IUnitOfWork unitOfWork)
        {
            _livroRepository = livroRepository;
            _autorRepository = autorRepository;
            _unitOfWork = unitOfWork;
        }

        public async Task<bool> Add(Livro livro)
        {
            if (!ExecutarValidacao(new LivroValidation(), livro)) return false;

            _livroRepository.Save(livro);
            await _unitOfWork.Commit();
            return true;
        }

        public async Task<bool> Remove(int id)
        {
            var wasRemoved = _livroRepository.Delete(id);

            if (wasRemoved)
            {
                await _unitOfWork.Commit();
                return true;
            }
            else
                return false;
        }

        public async Task<bool> Update(Livro livro)
        {
            if (!ExecutarValidacao(new LivroValidation(), livro)) return false;

            _livroRepository.Update(livro);
            await _unitOfWork.Commit();
            return true;
        }

        public void Dispose()
        {
            _livroRepository?.Dispose();
            _autorRepository?.Dispose();
        }
    }
}