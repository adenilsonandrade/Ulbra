using System.ComponentModel.DataAnnotations;

namespace Domain.ViewModels
{
    public class AutorViewModel
    {
        [Required(ErrorMessage = "O campo {0} é obrigatório")]
        [StringLength(100, ErrorMessage = "O campo {0} precisa ter entre {2} e {1} caracteres", MinimumLength = 2)]
        public string Nome { get; set; }

        [Required(ErrorMessage = "O campo {0} é obrigatório")]
        [StringLength(100, ErrorMessage = "O campo {0} precisa ter entre {2} e {1} caracteres", MinimumLength = 2)]
        public string Email { get; set; }

        // public LivroViewModel[] Livros { get; set; }

        public IList<LivroViewModel> Livros { get; set; }
    }
}