using FluentValidation;

namespace Domain.Entities.Validations
{
    public class LivroValidation : AbstractValidator<Livro>
    {
        public LivroValidation()
        {
            RuleFor(l => l.Titulo)
                    .NotEmpty().WithMessage("O campo {PropertyName} precisa ser fornecido")
                    .Length(2, 100).WithMessage("O campo {PropertyName} precisa ter entre {MinLength} e {MaxLength} caracteres");

            RuleFor(l => l.ISBN)
                    .NotEmpty().WithMessage("O campo {PropertyName} precisa ser fornecido")
                    .Length(2, 100).WithMessage("O campo {PropertyName} precisa ter entre {MinLength} e {MaxLength} caracteres");
            
            RuleFor(l => l.AnoPublicacao)
                    .NotEmpty().WithMessage("O campo {PropertyName} precisa ser fornecido");
        }
    }
}