using System.Linq.Expressions;
using Data.Context;
using Domain.Entities;
using Domain.Interfaces;
using Microsoft.EntityFrameworkCore;

namespace Data.Repositories
{
    public class LivroRepository : ILivroRepository
    {
        private readonly DataContext _context;

        public LivroRepository(DataContext context)
        {
            _context = context;
        }

        public async Task<IList<Livro>> SearchAll(Expression<Func<Livro, bool>> predicate)
        {
            return await _context.DbSetLivro.AsNoTracking().Where(predicate).ToListAsync();
        }

        public Task<Livro> GetByIdAsync(int entityId)
        {
            var livro = _context.DbSetLivro.SingleOrDefault(x => x.Id == entityId);
            return Task.FromResult(livro);
        }

        public Task<IList<Livro>> GetAllAsync()
        {
            var livros = _context.DbSetLivro.ToList();
            return Task.FromResult<IList<Livro>>(livros);
        }

        public void Save(Livro entity)
        {
            _context.Add(entity);
            _context.SaveChanges();
        }

        public void Update(Livro entity)
        {
            _context.Entry(entity).State = EntityState.Modified;
        }

        public bool Delete(int entityId)
        {
            var livro = _context.DbSetAutor.FirstOrDefault(x => x.Id == entityId);

            if (livro == null)
                return false;
            else
            {
                _context.DbSetAutor.Remove(livro);
                return true;
            }
        }

        public void Dispose()
        {
            _context?.Dispose();
        }
    }
}