#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "includes.hpp"

class Aluno{
private:
    string nome;
    string RA;
    string cursos[2];
    string periodo;
    string cpf;
public:
    Aluno();
    Aluno(string nome, string RA);
    string getNome();
    string getCPF();
    string getCurso(int numCurso);
    string getPeriodo();
    string getRA();
    void setNome(string nome);
    void setRA(string RA);
    void setCPF(string CPF);
    void setCurso(string nome, int numCurso);
    void setPeriodo(string periodo);
};


#endif // ALUNO_HPP
