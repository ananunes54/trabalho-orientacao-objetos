#ifndef BIBLIOTECA_INCLUDED_H
#define BIBLIOTECA_INCLUDED_H

#include <vector>
#include <item.h>

class Biblioteca
{
    private:
        std::vector<Item*> m_acervo;
    public:
        Biblioteca() {};
        void addItem(Item* item);
        void listarAcervo();
        ~Biblioteca();
};

#endif
