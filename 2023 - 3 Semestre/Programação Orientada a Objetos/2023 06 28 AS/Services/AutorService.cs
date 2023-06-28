using Domain.Entities;
using Domain.Interfaces;
using Domain.Entities.Validations;

namespace Services
{
    public class AutorService : BaseService, IAutorService
    {
        private readonly IAutorRepository _autorRepository;
        private readonly ILivroRepository _livroRepository;
        private readonly IUnitOfWork _unitOfWork;

        public AutorService(IAutorRepository autorRepository, ILivroRepository livroRepository, IUnitOfWork unitOfWork)
        {
            _autorRepository = autorRepository;
            _livroRepository = livroRepository;
            _unitOfWork = unitOfWork;
        }

        public async Task<bool> Add(Autor autor)
        {
            if (!ExecutarValidacao(new AutorValidation(), autor)) return false;

            _autorRepository.Save(autor);
            await _unitOfWork.Commit();
            return true;
        }

        public async Task<bool> Remove(int id)
        {
            var wasRemoved = _autorRepository.Delete(id);

            if (wasRemoved)
            {
                await _unitOfWork.Commit();
                return true;
            }
            else
                return false;
        }

        public async Task<bool> Update(Autor autor)
        {
            if (!ExecutarValidacao(new AutorValidation(), autor)) return false;

            _autorRepository.Update(autor);
            await _unitOfWork.Commit();
            return true;
        }

        public void Dispose()
        {
            _autorRepository?.Dispose();
            _livroRepository?.Dispose();
        }
    }
}