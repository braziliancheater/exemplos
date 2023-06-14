#include "medico.hpp"

Medico::Medico() {
    this->crm = " ";
    this->especialidade = " ";
}

Medico::Medico(string nome, string cpf, string rg, string crm, string especialidade) :Pessoas(nome, cpf, rg) {
    this->crm = crm;
    this->especialidade = especialidade;
}

string Medico::getCRM() {
    return this->crm;
}
string Medico::getEspecialidade() {
    return this->especialidade;
}

void Medico::setCRM(string crm) {
    this->crm = crm;
}

void Medico::setEspecialidade(string especialidade) {
    this->especialidade = especialidade;
}
