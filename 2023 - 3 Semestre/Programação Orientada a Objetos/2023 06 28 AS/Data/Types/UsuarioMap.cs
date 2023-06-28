using Domain.Entities;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace Data.Types
{
    public class UsuarioMap : IEntityTypeConfiguration<Usuario>
    {
        public void Configure(EntityTypeBuilder<Usuario> builder)
        {
            builder.ToTable("usuarios");

            builder.Property(i => i.Id).HasColumnName("id");

            builder.HasKey(i => i.Id);

            builder.Property(i => i.Nome)
                .HasColumnName("nome")
                .IsRequired()
                .HasColumnType("varchar(100)");

            builder.Property(i => i.Email)
                .HasColumnName("email")
                .IsRequired()
                .HasColumnType("varchar(50)");

            // N : N => Usuarios : Livros
            builder.HasMany(l => l.Livros)
                .WithMany(a => a.Usuarios)
                .UsingEntity<Dictionary<string, object>>(
                    "usuario_livro",
                    j => j.HasOne<Livro>().WithMany().HasForeignKey("LivroId"),
                    j => j.HasOne<Usuario>().WithMany().HasForeignKey("UsuarioId")
                );
        }
    }
}