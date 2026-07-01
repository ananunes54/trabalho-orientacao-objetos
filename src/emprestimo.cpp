#include <iostream>
#include <emprestimo.h>
#include <item.h>

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
