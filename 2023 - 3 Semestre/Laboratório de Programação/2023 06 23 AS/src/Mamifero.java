// Classe Mamifero: Subclasse de Animal, representa um mamífero específico com o atributo adicional tipoPelagem.
public class Mamifero extends Animal{
    private String tipoPelagem;

    // Construtor
    public Mamifero(String nome, int idade, double peso, String especie, String tipoPelagem) {
        super(nome, idade, peso, especie);
        this.tipoPelagem = tipoPelagem;
    }

    // Getters e setters
    public String getTipoPelagem() {
        return tipoPelagem;
    }

    public void setTipoPelagem(String tipoPelagem) {
        this.tipoPelagem = tipoPelagem;
    }

    // Método para amamentar
    // - Imprime uma mensagem indicando que o mamífero está amamentando.
    public void amamentar() {
        System.out.println("O mamífero " + getNome() + " está amamentando.");
    }
}
