#include "aviao_a_jato.hpp"

aviao_a_jato::aviao_a_jato() {
	this->marca = " ";
	this->quantidade_de_jatos = 0;
}

aviao_a_jato::aviao_a_jato(string marca, int quantidade_de_jatos) {
	this->marca = marca;
	this->quantidade_de_jatos = quantidade_de_jatos;
}

string aviao_a_jato::getMarca() {
	return this->marca;
}

int aviao_a_jato::getJatos() {
	return this->quantidade_de_jatos;
}

void aviao_a_jato::setJatos(int quantidade_de_jatos) {
	this->quantidade_de_jatos = quantidade_de_jatos;
}

void aviao_a_jato::setMarca(string marca) {
	this->marca = marca;
}
