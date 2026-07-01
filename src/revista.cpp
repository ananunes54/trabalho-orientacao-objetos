#include <iostream>
#include <revista.h>

void Revista::exibirInfo()
{
    std::cout << "Revista:" << m_titulo << "|";
    std::cout << "Edição:" << m_edicao << "|";
    std::cout << "Mês:" << m_mes << "|";
    std::cout << "Ano:" << m_ano << "|";
    std::cout << std::endl;
}
