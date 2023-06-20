// Classe Veterinario: Subclasse de Funcionario, representa um veterinário com o atributo adicional especialidade.
public class Veterinario extends Funcionario{
    private String especialidade;

    // Construtor
    public Veterinario(String nome, String cargo, double salario, String especialidade) {
        super(nome, cargo, salario);
        this.especialidade = especialidade;
    }

    // Getters e setters
    public String getEspecialidade() {
        return especialidade;
    }

    public void setEspecialidade(String especialidade) {
        this.especialidade = especialidade;
    }

    // Método para realizar um exame no animal
    // - Recebe um objeto Animal como argumento.
    // - Realiza um exame no animal, imprimindo uma mensagem indicando que o veterinário está realizando o exame.

    public void realizarExame(Animal animal) {
        System.out.println("O veterinário " + getNome() + " está realizando um exame no animal " + animal.getNome());
    }
}
