#ifndef CONTA_HPP
#define CONTA_HPP

#include "../includes.hpp"

class conta {
private:
	string nome;
	string numero_da_conta;
	float saldo;
	std::vector<transacao> transacoes;
public:
	conta();
	conta(string nome, string numero_da_conta, float saldo);
	// setters
	void setNome(string nome);
	void setNumeroConta(string numero_da_conta);
	void setSaldo(float saldo);
	// getters
	string getNome();
	string getNumeroConta();
	float getSaldo();
	// abstratas
	void adicionarTransacao(transacao transacao);
	transacao getTransacao(int posicao);
	int numeroTransacoes();
	void deposito(float valor, string data, string descricao);
	virtual void retirada(float valor, string data, string descricao) = 0;
	virtual void impressao() = 0;
};

#endif