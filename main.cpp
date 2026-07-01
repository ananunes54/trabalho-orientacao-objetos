#include <iostream>
#include <vector>

#include <biblioteca.h>
#include <usuario.h>
#include <emprestimo.h>
#include <livro.h>
#include <revista.h>
#include <dvd.h>

int main()
{
    std::vector<Item*> acervo;
    acervo.push_back(new Livro(1, 1899, "Dom casmurro", "Machado de Assis", 300));
    acervo.push_back(new Livro(2, 1949, "1984", "George Orwell", 328));
    acervo.push_back(new Revista(3, 2026, "Veja", 12, "Janeiro"));
    acervo.push_back(new Dvd(4, 1999, "Matrix", 136, "Wachowski"));

    Biblioteca biblioteca;

    std::cout << "=== SISTEMA DE BIBLIOTECA DIGITAL ===" << std::endl;
    std::cout << "Adicionando itens ao acervo:" << std::endl;

    for (auto item : acervo)
    {
        biblioteca.addItem(item);
        std::cout << "Item adicionado ao acervo." << std::endl;
    }
    std::cout << std::endl;

    
    std::cout << "=== ACERVO DA BIBLIOTECA ===" << std::endl;
    biblioteca.listarAcervo();
    std::cout << std::endl;


    std::vector<Usuario*> usuarios;
    usuarios.push_back(new Usuario("João Silva", 1001));

    std::cout << "=== CADASTRO DE USUÁRIO ===" << std::endl;
    for (auto usuario : usuarios)
    {
        std::cout << "Usuário: " << usuario->getNome() << " (ID: " << usuario->getId() << ") cadastrado" << std::endl;
    }
    std::cout << std::endl;


    std::vector<Emprestimo*> emprestimos;
    emprestimos.push_back(new Emprestimo("10/06/2026", "20/06/2026", acervo[0], usuarios[0]));
    usuarios[0]->addEmprestimo(emprestimos.back());

    std::cout << "=== REALIZANDO EMPRÉSTIMO ===" << std::endl;
    for (auto emprestimo : emprestimos)
    {
        std::cout << "Empréstmo realizado com sucesso!" << std::endl;
    }
    std::cout << std::endl;

    for (auto usuario : usuarios)
    {
        usuario->listarEmprestimos();
    }

    std::cout << "=== FIM DO PROGAMA ===" << std::endl;
    std::cout << "A biblioteca será destruída e todos os itens liberados." << std::endl;
}
