#ifndef EMPRESTIMO_INCLUDED_H
#define EMPRESTIMO_INCLUDED_H

#include <string>

class Usuario;
class Item;

class Emprestimo
{
    private:
        std::string m_dataEmprestimo;
        std::string m_dataDevolucao;
        Item* m_item;
        Usuario* m_usuario; 
    public:
        Emprestimo(std::string dataEmprestimo, std::string dataDevolucao, Item* item, Usuario* usuario) : m_dataEmprestimo(dataEmprestimo), m_dataDevolucao(dataDevolucao), m_item(item), m_usuario(usuario) {}
        double calcularMulta();
        void exibir();
};

#endif
