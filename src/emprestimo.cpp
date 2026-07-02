#include <iostream>
#include <emprestimo.h>
#include <usuario.h>
#include <item.h>

Emprestimo::Emprestimo(std::string dataEmprestimo, std::string dataDevolucao, Item* item, Usuario* usuario) : m_dataEmprestimo(dataEmprestimo), m_dataDevolucao(dataDevolucao), m_item(item), m_usuario(usuario)
{
    usuario->addEmprestimo(this);
}

double Emprestimo::calcularMulta()
{
    return 5;
}

void Emprestimo::exibir()
{
    std::cout << " Empréstimo: " << m_item->getTitulo() << " | ";
    std::cout << "Data: " << m_dataEmprestimo << " | ";
    std::cout << "Devolução: " << m_dataDevolucao << std::endl;
    std::cout << "Multa por atraso: R$ " << calcularMulta() << std::endl;
}
