#ifndef ITEM_INCLUDED_H
#define ITEM_INCLUDED_H

#include <string>

class Item
{
    protected:
        int m_id;
        int m_ano;
        std::string m_titulo;

    public:
        Item(int id, int ano, std::string titulo) : m_id(id), m_ano(ano), m_titulo(titulo) {};
        virtual void exibirInfo() = 0;
        std::string getTitulo();
        virtual ~Item() {};
};

#endif
