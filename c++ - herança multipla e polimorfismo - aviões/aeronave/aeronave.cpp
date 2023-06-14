#include "aeronave.hpp"

Aeronave::Aeronave() {
	this->nome = " ";
	this->numero_de_motores = 0;
}

Aeronave::Aeronave(string nome, int numero_de_motores) {
	this->nome = nome;
	this->numero_de_motores = numero_de_motores;
}

string Aeronave::getNome() {
	return this->nome;
}

int Aeronave::getMotores() {
	return this->numero_de_motores;
}

void Aeronave::setNome(string nome) {
	this->nome = nome;
}

void Aeronave::setMotores(int motores) {
	this->numero_de_motores = motores;
}