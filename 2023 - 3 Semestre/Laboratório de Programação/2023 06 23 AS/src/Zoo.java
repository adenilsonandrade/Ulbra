// Classe Zoo:
// - Contém um array de animais e um array de funcionários.
// - Permite adicionar animais e funcionários aos arrays correspondentes.
// - Usa herança e polimorfismo ao lidar com objetos do tipo Animal e Funcionario.
// - Demonstra sobrecarga de métodos ao adicionar animais e funcionários ao zoo.
public class Zoo {
    private Animal[] animais;
    private Funcionario[] funcionarios;
    private int numeroAnimais;
    private int numeroFuncionarios;

    // Construtor
    public Zoo(int capacidadeAnimais, int capacidadeFuncionarios) {
        animais = new Animal[capacidadeAnimais];
        funcionarios = new Funcionario[capacidadeFuncionarios];
        numeroAnimais = 0;
        numeroFuncionarios = 0;
    }

    // Método para adicionar um animal ao array de animais
    public void adicionarAnimal(Animal animal) {
        if (numeroAnimais < animais.length) {
            animais[numeroAnimais] = animal;
            numeroAnimais++;
            System.out.println("Animal adicionado com sucesso ao Zoo.");
        } else {
            System.out.println("Capacidade máxima de animais atingida no Zoo.");
        }
    }

    // Método para adicionar um funcionário ao array de funcionários
    public void adicionarFuncionario(Funcionario funcionario) {
        if (numeroFuncionarios < funcionarios.length) {
            funcionarios[numeroFuncionarios] = funcionario;
            numeroFuncionarios++;
            System.out.println("Funcionário adicionado com sucesso ao Zoo.");
        } else {
            System.out.println("Capacidade máxima de funcionários atingida no Zoo.");
        }
    }
}