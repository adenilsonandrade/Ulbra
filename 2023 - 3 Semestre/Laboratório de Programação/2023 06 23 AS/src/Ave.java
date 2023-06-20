// Classe Ave: Subclasse de Animal, representa uma ave específica com o atributo adicional envergaduraAsa.
public class Ave extends Animal implements Treinavel {
    private double envergaduraAsa;

    // Construtor
    public Ave(String nome, int idade, double peso, String especie, double envergaduraAsa) {
        super(nome, idade, peso, especie);
        this.envergaduraAsa = envergaduraAsa;
    }

    // Getters e setters
    public double getEnvergaduraAsa() {
        return envergaduraAsa;
    }

    public void setEnvergaduraAsa(double envergaduraAsa) {
        this.envergaduraAsa = envergaduraAsa;
    }

    // Método para voar
    // - Imprime uma mensagem indicando que a ave está voando.
    public void voar() {
        System.out.println("A ave " + getNome() + " está voando.");
    }

    // Implementação do método realizarTruque() da interface Treinavel
    @Override
    public void realizarTruque() {
        System.out.println("A ave " + getNome() + " realizou um truque.");
    }
}