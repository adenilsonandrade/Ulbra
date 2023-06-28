using System.Linq.Expressions;
using Data.Context;
using Domain.Entities;
using Domain.Interfaces;
using Microsoft.EntityFrameworkCore;

namespace Data.Repositories
{
    public class AutorRepository : IAutorRepository
    {
        private readonly DataContext _context;

        public AutorRepository(DataContext context)
        {
            _context = context;
        }

        public async Task<IList<Autor>> SearchAll(Expression<Func<Autor, bool>> predicate)
        {
            return await _context.DbSetAutor.AsNoTracking().Where(predicate).ToListAsync();
        }

        public Task<Autor> GetByIdAsync(int entityId)
        {
            var autor = _context.DbSetAutor.SingleOrDefault(x => x.Id == entityId);
            return Task.FromResult(autor);
        }

        public Task<IList<Autor>> GetAllAsync()
        {
            var autores = _context.DbSetAutor.ToList();
            return Task.FromResult<IList<Autor>>(autores);
        }

        public void Save(Autor entity)
        {
            _context.Add(entity);
            _context.SaveChanges();
        }
        
        public void Update(Autor entity)
        {
            _context.Entry(entity).State = EntityState.Modified;
        }

        public bool Delete(int entityId)
        {
            var autor = _context.DbSetAutor.FirstOrDefault(x => x.Id == entityId);

            if (autor == null)
                return false;
            else
            {
                _context.DbSetAutor.Remove(autor);
                return true;
            }
        }

        public void Dispose()
        {
            _context?.Dispose();
        }
    }
}