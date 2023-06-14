#ifndef MEDICO_HPP
#define MEDICO_HPP

#include "../includes.hpp"
#include "../pessoas/pessoas.hpp"

class Medico : public Pessoas {
private:
    string crm;
    string especialidade;
public:
    Medico();
    Medico(string nome, string cpf, string rg, string crm, string especialidade);
    string getCRM();
    string getEspecialidade();
    void setCRM(string crm);
    void setEspecialidade(string especialidade);
};

#endif