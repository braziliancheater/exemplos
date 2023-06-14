#include "pessoas.hpp"

Pessoas::Pessoas() {
    this->nome = " ";
    this->cpf = " ";
    this->rg = " ";
}

Pessoas::Pessoas(string nome, string cpf, string rg) {
    this->nome = nome;
    this->cpf = cpf;
    this->rg = rg;
}

string Pessoas::getNome() {
    return this->nome;
}

string Pessoas::getCPF() {
    return this->cpf;
}

string Pessoas::getRG() {
    return this->rg;
}

void Pessoas::setNome(string nome) {
    this->nome = nome;
}

void Pessoas::setCPF(string cpf) {
    this->cpf = cpf;
}

void Pessoas::setRG(string rg) {
    this->rg = rg;
}