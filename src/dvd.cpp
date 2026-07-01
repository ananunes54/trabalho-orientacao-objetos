#include <iostream>
#include <dvd.h>

void Dvd::exibirInfo()
{
    std::cout << "DVD:" << m_titulo << "|";
    std::cout << "Diretor:" << m_diretor << "|";
    std::cout << "Duração:" << m_duracao << "|";
    std::cout << "Ano:" << m_ano << "|";
    std::cout << std::endl;
}
