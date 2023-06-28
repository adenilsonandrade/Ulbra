using System.Linq.Expressions;
using Data.Context;
using Domain.Entities;
using Domain.Interfaces;
using Microsoft.EntityFrameworkCore;

namespace Data.Repositories
{
    public class UsuarioRepository : IUsuarioRepository
    {
        private readonly DataContext _context;

        public UsuarioRepository(DataContext context)
        {
            _context = context;
        }

        public async Task<IList<Usuario>> SearchAll(Expression<Func<Usuario, bool>> predicate)
        {
            return await _context.DbSetUsuario.AsNoTracking().Where(predicate).ToListAsync();
        }

        public Task<Usuario> GetByIdAsync(int entityId)
        {
            var usuario = _context.DbSetUsuario.SingleOrDefault(x => x.Id == entityId);
            return Task.FromResult(usuario);
        }

        public Task<IList<Usuario>> GetAllAsync()
        {
            var usuarios = _context.DbSetUsuario.ToList();
            return Task.FromResult<IList<Usuario>>(usuarios);
        }

        public void Save(Usuario entity)
        {
            _context.Add(entity);
            _context.SaveChanges();
        }

        public void Update(Usuario entity)
        {
            _context.Entry(entity).State = EntityState.Modified;
        }

        public bool Delete(int entityId)
        {
            var usuario = _context.DbSetUsuario.FirstOrDefault(x => x.Id == entityId);

            if (usuario == null)
                return false;
            else
            {
                _context.DbSetUsuario.Remove(usuario);
                return true;
            }
        }

        public void Dispose()
        {
            _context?.Dispose();
        }
    }
}