#include <iostream>

#include <biblioteca.h>
#include <usuario.h>
#include <emprestimo.h>
#include <livro.h>
#include <revista.h>
#include <dvd.h>

int main()
{
    Livro* l1 = new Livro(1, 1899, "Dom casmurro", "Machado de Assis", 300);
    Livro* l2 = new Livro(2, 1949, "1984", "George Orwell", 328);
    Revista* r1 = new Revista(3, 2026, "Veja", 12, "Janeiro");
    Dvd* d1 = new Dvd(4, 1999, "Matrix", 136, "Wachowski");

    Biblioteca biblioteca;

    std::cout << "=== SISTEMA DE BIBLIOTECA DIGITAL ===" << std::endl << std::endl;
    std::cout << "Adicionando itens ao acervo:" << std::endl;

    biblioteca.addItem(l1);
    biblioteca.addItem(l2);
    biblioteca.addItem(r1);
    biblioteca.addItem(d1);
    std::cout << std::endl;

    
    std::cout << "=== ACERVO DA BIBLIOTECA ===" << std::endl;
    biblioteca.listarAcervo();
    std::cout << std::endl;

    
    Usuario* u1 = new Usuario("João Silva", 1001);

    std::cout << "=== CADASTRO DE USUÁRIO ===" << std::endl;
    std::cout << "Usuário: " << u1->getNome() << "(ID: " << u1->getId() << ") cadastrado" << std::endl;
    std::cout << std::endl;

    Emprestimo* e1 = new Emprestimo("10/06/2026", "20/06/2026", l1, u1);
    u1->addEmprestimo(e1);
    std::cout << "=== REALIZANDO EMPRÉSTIMO ===" << std::endl;
    std::cout << "Empréstmo realizado com sucesso!" << std::endl;
    std::cout << std::endl;

    u1->listarEmprestimos();
}
