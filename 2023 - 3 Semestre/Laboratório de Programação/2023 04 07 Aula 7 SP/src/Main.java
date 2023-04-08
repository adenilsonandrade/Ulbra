public class Main {
    public static void main(String[] args) {

        Circulo circulo = new Circulo();
        circulo.raio = 5.0;
        double area = circulo.calcularArea();
        double perimetro = circulo.calcularPerimetro();
        System.out.println("Área do círculo: " + area);
        System.out.println("Perímetro do círculo: " + perimetro);

        Livro livro = new Livro();
        livro.titulo = "Livro 1";
        livro.autor = "Autor Livro 1";
        livro.editora = "Editora Livro 1";
        livro.numPaginas = 195;
        livro.exibirDetalhes();

        Animal animal = new Animal();
        animal.nome = "Leão";
        animal.idade = 5;
        animal.especie = "Felino";
        animal.emitirSom();
        animal.dormir();
    }
}