#include "mamifero.hpp"

Mamifero::Mamifero() {
	this->nome = " ";
}

Mamifero::Mamifero(string nome) {
	this->nome = nome;
}

void Mamifero::setNome(string nome) {
	this->nome = nome;
}

string Mamifero::getNome() {
	return this->nome;
}