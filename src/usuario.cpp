#include <iostream>
#include <usuario.h>
#include <emprestimo.h>

void Usuario::listarEmprestimos()
{
    std::cout << "Empréstimos do usuário " << m_nome << " (ID: " << m_idUsuario << "):" << std::endl;
    for (auto e : m_emprestimos)
    {
        e->exibir();
        std::cout << std::endl;
    }
}

void Usuario::addEmprestimo(Emprestimo* emprestimo)
{
    m_emprestimos.push_back(emprestimo);
}

std::string Usuario::getNome()
{
    return m_nome;
}

int Usuario::getId()
{
    return m_idUsuario;
}
