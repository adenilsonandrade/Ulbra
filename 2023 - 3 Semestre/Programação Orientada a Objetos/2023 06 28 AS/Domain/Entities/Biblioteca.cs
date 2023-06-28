namespace Domain.Entities
{
    public class Biblioteca : Entity
    {
        public List<Livro> Livros { get; set; }
        public List<Usuario> Usuarios { get; set; }
        public List<Autor> Autores { get; set; }

        public Biblioteca(int Id, List<Livro> Livros, List<Usuario> Usuarios, List<Autor> Autores)
        {
            this.Livros = Livros;
            this.Usuarios = Usuarios;
            this.Autores = Autores;
        }

        // public void EmprestarLivro(Livro livro, Usuario usuario)
        // {
        //     // Verificar se o livro está disponível para empréstimo
        //     if (!livro.Emprestado)
        //     {
        //         // Verificar se o usuário é válido e pode fazer empréstimos
        //         if (usuario != null && usuario.PodeEmprestarLivro())
        //         {
        //             // Registrar o empréstimo do livro
        //             livro.Emprestado = true;
        //             livro.UsuarioEmprestado = usuario;

        //             Console.WriteLine("Livro emprestado com sucesso!");
        //         }
        //         else
        //         {
        //             Console.WriteLine("Usuário inválido ou não pode fazer empréstimos.");
        //         }
        //     }
        //     else
        //     {
        //         Console.WriteLine("Livro indisponível para empréstimo.");
        //     }
        // }

        // public void DevolverLivro(Livro livro, Usuario usuario)
        // {
        //     // Verificar se o livro está emprestado
        //     if (livro.Emprestado)
        //     {
        //         // Verificar se o usuário que está devolvendo é o mesmo que emprestou
        //         if (livro.UsuarioEmprestado == usuario)
        //         {
        //             // Registrar a devolução do livro
        //             livro.Emprestado = false;
        //             livro.UsuarioEmprestado = null;

        //             Console.WriteLine("Livro devolvido com sucesso!");
        //         }
        //         else
        //         {
        //             Console.WriteLine("Usuário inválido para realizar a devolução do livro.");
        //         }
        //     }
        //     else
        //     {
        //         Console.WriteLine("O livro não está emprestado.");
        //     }
        // }
    }
}