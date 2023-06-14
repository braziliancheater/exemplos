#include "enfermeiro.hpp"

Enfermeiro::Enfermeiro() {
    this->registro = " ";
}

Enfermeiro::Enfermeiro(string nome, string cpf, string rg, string registro) :Pessoas(nome, cpf, rg) {
    this->registro = registro;
}

string Enfermeiro::getRegistro() {
    return this->registro;
}

void Enfermeiro::setRegistro(string registro) {
    this->registro = registro;
}