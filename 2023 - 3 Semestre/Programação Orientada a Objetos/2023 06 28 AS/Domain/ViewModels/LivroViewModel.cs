using System.ComponentModel.DataAnnotations;

namespace Domain.ViewModels
{
    public class LivroViewModel
    {
        [Required(ErrorMessage = "O campo {0} é obrigatório")]
        [StringLength(100, ErrorMessage = "O campo {0} precisa ter entre {2} e {1} caracteres", MinimumLength = 2)]
        public string Titulo { get; set; }

        [Required(ErrorMessage = "O campo {0} é obrigatório")]
        public string ISBN { get; set; }

        // public List<int> AutoresIds { get; set; }
        // public IList<AutorViewModel> Autores { get; set; }
        // public IList<UsuarioViewModel> Usuarios { get; set; }

        [Required(ErrorMessage = "O campo {0} é obrigatório")]
        public string AnoPublicacao { get; set; }
    }
}