// Classe Main:
// - Demonstração da criação de objetos das classes Animal, Mamifero, Ave, Funcionario e Veterinario.
// - Demonstração do uso de herança, polimorfismo e sobrecarga de métodos.
// - Exemplo de chamadas de métodos para movimentação, realização de exames, amamentação, voo e truques.
// - Exemplo de uso da classe Zoo para adicionar animais e funcionários ao zoo, com verificação de capacidade máxima.
public class Main {
    public static void main(String[] args) {
        // Criando objetos animais
        Animal animal1 = new Animal("Jacaré", 5, 30.0, "Réptil");
        Mamifero mamifero1 = new Mamifero("Elefante", 10, 3000.0, "Mamífero", "Pele Grossa");
        Ave ave1 = new Ave("Águia", 3, 2.5, "Rapina", 2.0);

        // Criando objetos funcionários
        Funcionario funcionario1 = new Funcionario("João", "Tratador", 2000.0);
        Funcionario funcionario2 = new Funcionario("Maria", "Zelador", 2500.0);
        Veterinario veterinario1 = new Veterinario("Carlos", "Veterinário", 6000.0, "Ortopedia");

        // Demonstrando o método amamentar() da classe Mamifero
        mamifero1.amamentar(); // Chama o método amamentar() da classe Mamifero

        // Demonstrando o método voar() da classe Ave
        ave1.voar(); // Chama o método voar() da classe Ave

        // Demonstrando polimorfismo com o método movimentar()
        animal1.movimentar(); // Chama o método movimentar() da classe Animal
        mamifero1.movimentar(); // Chama o método movimentar() herdado de Animal

        // Demonstrando a sobrecarga do método movimentar() passando uma String por parametro
        ave1.movimentar("rápida"); // Chama o método movimentar() sobrecarregado herdado de Animal

        // Demonstrando polimorfismo com o método realizarExame()
        veterinario1.realizarExame(animal1); // Chama o método realizarExame() da classe Veterinario

        // Demonstrando a implementação da interface Treinavel pela classe Ave
        ave1.realizarTruque(); // Chama o método realizarTruque() da interface Treinavel

        // Criando um objeto Zoo e adicionando animais e funcionários
        Zoo zoo = new Zoo(3, 2);
        zoo.adicionarAnimal(animal1);
        zoo.adicionarAnimal(mamifero1);
        zoo.adicionarAnimal(ave1);
        zoo.adicionarFuncionario(funcionario1);
        zoo.adicionarFuncionario(funcionario2);

        // Tentando adicionar mais animais e funcionários do que o limite permitido
        Animal animal2 = new Animal("Tigre", 4, 200.0, "Felino");
        Animal animal3 = new Animal("Girafa", 7, 800.0, "Mamífero");
        Funcionario funcionario3 = new Funcionario("Pedro", "Zelador", 3000.0);
        zoo.adicionarAnimal(animal2); // Capacidade máxima de animais atingida no Zoo.
        zoo.adicionarAnimal(animal3); // Capacidade máxima de animais atingida no Zoo.
        zoo.adicionarFuncionario(funcionario3); // Capacidade máxima de funcionários atingida no Zoo.
    }
}