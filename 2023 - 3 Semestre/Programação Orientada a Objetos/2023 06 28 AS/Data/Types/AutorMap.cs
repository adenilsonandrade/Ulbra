using Domain.Entities;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace Data.Types
{
    public class AutorMap : IEntityTypeConfiguration<Autor>
    {
        public void Configure(EntityTypeBuilder<Autor> builder)
        {
            builder.ToTable("autores");

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

            // N : N => Autores : Livros
            builder.HasMany(l => l.Livros)
                .WithMany(a => a.Autores)
                .UsingEntity<Dictionary<string, object>>(
                    "autor_livro",
                    j => j.HasOne<Livro>().WithMany().HasForeignKey("LivroId"),
                    j => j.HasOne<Autor>().WithMany().HasForeignKey("AutorId")
                );
        }
    }
}