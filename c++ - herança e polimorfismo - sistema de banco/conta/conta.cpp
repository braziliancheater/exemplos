#include "conta.hpp"

conta::conta() {
	this->nome = " ";
	this->numero_da_conta = "";
	this->saldo = 0;
}

conta::conta(string nome, string numero_da_conta, float valor) {
	this->nome = nome;
	this->numero_da_conta = numero_da_conta;
	this->saldo = valor;
}

void conta::setNome(string nome) {
	this->nome = nome;
}

void conta::setNumeroConta(string numero_da_conta) {
	this->numero_da_conta = numero_da_conta;
}

void conta::setSaldo(float saldo) {
	this->saldo = saldo;
}

string conta::getNome() {
	return this->nome;
}

string conta::getNumeroConta() {
	return this->numero_da_conta;
}

float conta::getSaldo() {
	return this->saldo;
}

void conta::deposito(float valor, string data, string descricao) {
	this->saldo += valor;
	transacao temp;
	temp.setData(data);
	temp.setDescricao(descricao);
	temp.setValor(valor);
	this->transacoes.push_back(temp);
}

void conta::adicionarTransacao(transacao transacao) {
	this->transacoes.push_back(transacao);
}

transacao conta::getTransacao(int posicao) {
	return this->transacoes[posicao];
}

int conta::numeroTransacoes() {
	return this->transacoes.size();
}

