#ifndef ENFERMEIRO_HPP
#define ENFERMEIRO_HPP

#include "../includes.hpp"
#include "../pessoas/pessoas.hpp"

class Enfermeiro : public Pessoas {
private:
    string registro;
public:
    Enfermeiro();
    Enfermeiro(string nome, string cpf, string rg, string registro);
    string getRegistro();
    void setRegistro(string registro);
};

#endif