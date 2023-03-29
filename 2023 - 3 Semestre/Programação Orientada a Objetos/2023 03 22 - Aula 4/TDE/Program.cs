using System;
using System.Collections.Generic;

namespace CRUD_Pessoas
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Pessoa> listaPessoas = new List<Pessoa>();
            int opcao = 0;

            while (opcao != 5)
            {
                Console.WriteLine("Escolha uma opção:");
                Console.WriteLine("1 - Inserir nova pessoa");
                Console.WriteLine("2 - Exibir todas as pessoas cadastradas");
                Console.WriteLine("3 - Atualizar dados de uma pessoa");
                Console.WriteLine("4 - Excluir pessoa");
                Console.WriteLine("5 - Sair");
                opcao = int.Parse(Console.ReadLine());

                switch (opcao)
                {
                    case 1:
                        Console.WriteLine("Digite o ID da pessoa:");
                        int id = int.Parse(Console.ReadLine());
                        Console.WriteLine("Digite o nome da pessoa:");
                        string nome = Console.ReadLine();
                        Console.WriteLine("Digite o número de telefone da pessoa:");
                        string telefone = Console.ReadLine();
                        Pessoa novaPessoa = new Pessoa(id, nome, telefone);
                        listaPessoas.Add(novaPessoa);
                        Console.WriteLine("Pessoa adicionada com sucesso!");
                        break;

                    case 2:
                        Console.WriteLine("Pessoas cadastradas:");
                        foreach (Pessoa pessoa in listaPessoas)
                        {
                            Console.WriteLine(pessoa);
                        }
                        break;

                    case 3:
                        Console.WriteLine("Digite o ID da pessoa a ser atualizada:");
                        int idAtualizar = int.Parse(Console.ReadLine());
                        Pessoa pessoaAtualizar = listaPessoas.Find(p => p.Id == idAtualizar);
                        if (pessoaAtualizar != null)
                        {
                            Console.WriteLine("Digite o novo nome da pessoa:");
                            pessoaAtualizar.Nome = Console.ReadLine();
                            Console.WriteLine("Digite o novo número de telefone da pessoa:");
                            pessoaAtualizar.Telefone = Console.ReadLine();
                            Console.WriteLine("Dados atualizados com sucesso!");
                        }
                        else
                        {
                            Console.WriteLine("Pessoa não encontrada!");
                        }
                        break;

                    case 4:
                        Console.WriteLine("Digite o ID da pessoa a ser excluída:");
                        int idExcluir = int.Parse(Console.ReadLine());
                        Pessoa pessoaExcluir = listaPessoas.Find(p => p.Id == idExcluir);
                        if (pessoaExcluir != null)
                        {
                            listaPessoas.Remove(pessoaExcluir);
                            Console.WriteLine("Pessoa excluída com sucesso!");
                        }
                        else
                        {
                            Console.WriteLine("Pessoa não encontrada!");
                        }
                        break;

                    case 5:
                        Console.WriteLine("Encerrando programa...");
                        break;

                    default:
                        Console.WriteLine("Opção inválida!");
                        break;
                }
            }
        }
    }
}