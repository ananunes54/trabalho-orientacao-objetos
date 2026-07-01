#ifndef REVISTA_INCLUDED_H
#define REVISTA_INCLUDED_H

#include <string>
#include <item.h>

class Revista : public Item
{
    private:
        int m_edicao;
        std::string m_mes;
    public:
        Revista(int id, int ano, std::string titulo, int edicao, std::string mes) : Item(id, ano, titulo), m_edicao(edicao), m_mes(mes) {};
        void exibirInfo() override;
};

#endif
