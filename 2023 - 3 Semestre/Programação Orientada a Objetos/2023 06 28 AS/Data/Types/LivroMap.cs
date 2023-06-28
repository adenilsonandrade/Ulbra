using Domain.Entities;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace Data.Types
{
    public class LivroMap : IEntityTypeConfiguration<Livro>
    {
        public void Configure(EntityTypeBuilder<Livro> builder)
        {
            builder.ToTable("livros");

            builder.Property(i => i.Id).HasColumnName("id");

            builder.HasKey(i => i.Id);

            builder.Property(i => i.Titulo)
                .HasColumnName("titulo")
                .IsRequired()
                .HasColumnType("varchar(100)");

            builder.Property(i => i.ISBN)
                .HasColumnName("isbn")
                .IsRequired()
                .HasColumnType("varchar(50)");

            builder.Property(i => i.AnoPublicacao)
                .HasColumnName("ano_publicacao")
                .IsRequired();

            // N : N => Livros : Autores
            builder.HasMany(l => l.Autores)
                .WithMany(a => a.Livros)
                .UsingEntity<Dictionary<string, object>>(
                    "autor_livro",
                    j => j.HasOne<Autor>().WithMany().HasForeignKey("AutorId"),
                    j => j.HasOne<Livro>().WithMany().HasForeignKey("LivroId")
                );

            // N : N => Livros : Usuarios
            builder.HasMany(l => l.Usuarios)
                .WithMany(a => a.Livros)
                .UsingEntity<Dictionary<string, object>>(
                    "usuario_livro",
                    j => j.HasOne<Usuario>().WithMany().HasForeignKey("UsuarioId"),
                    j => j.HasOne<Livro>().WithMany().HasForeignKey("LivroId")
                );
        }
    }
}