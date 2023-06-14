#include "aviao_monomotor.hpp"

aviao_monomotor::aviao_monomotor() {
	// dummy
}

aviao_monomotor::aviao_monomotor(string nome, string marca) {
	this->nome = nome;
	this->marca = marca;
}

string aviao_monomotor::getNome() {
	return this->nome;
}

string aviao_monomotor::getMarca() { // virtual
	return this->marca + " teste";
}
