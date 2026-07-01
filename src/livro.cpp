#include <iostream>
#include <string>
#include <livro.h>

std::string Livro::getAutor()
{
    return m_autor;
}

int Livro::getPaginas()
{
    return m_numPaginas;
}

void Livro::exibirInfo()
{
    std::cout << "Livro: " << m_titulo << " | ";
    std::cout << "Autor: " << m_autor << " | ";
    std::cout << "Ano: " << m_ano << " | ";
    std::cout << "Páginas: " << m_numPaginas << std::endl;
}
