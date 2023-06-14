#include "transacao.hpp"

transacao::transacao() {
	this->descricao = " ";
	this->valor = 0;
}

transacao::transacao(string data, float valor, string descricao) {
	this->descricao = descricao;
	this->valor = valor;
	this->data = data;
}

void transacao::setData(string data) {
	this->data = data;
}

void transacao::setValor(float valor) {
	this->valor = valor;
}

void transacao::setDescricao(string descricao) {
	this->descricao = descricao;
}

string transacao::getData() const {
	return this->data;
}

string transacao::getDescricao() const {
	return this->descricao;
}

float transacao::getValor() const {
	return this->valor;
}