#include <iostream>
#include <biblioteca.h>
#include <item.h>

void Biblioteca::addItem(Item* item)
{
    m_acervo.push_back(item);
    std::cout << "Item adicionado ao acervo." << std::endl;
}

void Biblioteca::listarAcervo()
{
    for (auto item : m_acervo)
    {
        item->exibirInfo();
    }

    std::cout << "Total de itens:" << m_acervo.size() << std::endl;
}

Biblioteca::~Biblioteca()
{
    for (auto item : m_acervo)
    {
        delete item;
    }
}
