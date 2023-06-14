#ifndef PESSOAS_HPP
#define PESSOAS_HPP

#include "../includes.hpp"

class Pessoas {
private:
    string nome;
    string cpf;
    string rg;
public:
    Pessoas();
    Pessoas(string nome, string cpf, string rg);
    string getNome();
    string getCPF();
    string getRG();
    void setNome(string nome);
    void setCPF(string cpf);
    void setRG(string rg);
};

#endif