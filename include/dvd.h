#ifndef DVD_INCLUDED_H
#define DVD_INCLUDED_H

#include <string>
#include <item.h>

class Dvd : public Item
{
    private:
        int m_duracao;
        std::string m_diretor;
    public:
        Dvd(int id, int ano, std::string titulo, int duracao, std::string diretor) : Item(id, ano, titulo), m_duracao(duracao), m_diretor(diretor) {};
        void exibirInfo() override;
};

#endif
