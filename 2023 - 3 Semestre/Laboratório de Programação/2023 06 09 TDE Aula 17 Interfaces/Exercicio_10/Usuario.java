public class Usuario implements Persistente {
    private String nome;
    private String email;

    public Usuario(String nome, String email) {
        this.nome = nome;
        this.email = email;
    }

    @Override
    public void salvar() {
        System.out.println("Usuário salvo: " + nome + " (" + email + ")");
    }

    @Override
    public void atualizar() {
        System.out.println("Usuário atualizado: " + nome + " (" + email + ")");
    }

    @Override
    public void deletar() {
        System.out.println("Usuário deletado: " + nome + " (" + email + ")");
    }

    @Override
    public void buscar() {
        System.out.println("Usuário encontrado: " + nome + " (" + email + ")");
    }
}