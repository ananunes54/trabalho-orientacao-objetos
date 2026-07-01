#ifndef LIVRO_INCLUDED_H
#define LIVRO_INCLUDED_H

#include <string>
#include <item.h>

class Livro : public Item
{
    private:
        std::string m_autor;
        int m_numPaginas;

    public:
        Livro(int id, int ano, std::string titulo, std::string autor, int numPaginas) : Item(id, ano, titulo), m_autor(autor), m_numPaginas(numPaginas) {};
        std::string getAutor();
        int getPaginas();
        void exibirInfo() override;
};

#endif
