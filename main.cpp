#include <iostream>

#include <biblioteca.h>
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
}
