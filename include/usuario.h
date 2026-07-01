#ifndef USUARIO_INCLUDED_H
#define USUARIO_INCLUDED_H

#include <string>
#include <vector>

class Emprestimo;

class Usuario
{
    private:
        std::string m_nome;
        int m_idUsuario;
        std::vector<Emprestimo*> m_emprestimos;
    public:
        Usuario(std::string nome, int idUsuario) : m_nome(nome), m_idUsuario(idUsuario) {}
        void addEmprestimo(Emprestimo* emprestimo);
        void listarEmprestimos();
        std::string getNome();
        int getId();
};

#endif
