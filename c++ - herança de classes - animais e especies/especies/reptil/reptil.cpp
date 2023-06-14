#include "reptil.hpp"

Reptil::Reptil() {
	this->nome = " ";
}

Reptil::Reptil(string nome) {
	this->nome = nome;
}

void Reptil::setNome(string nome) {
	this->nome = nome;
}

string Reptil::getNome() {
	return this->nome;
}