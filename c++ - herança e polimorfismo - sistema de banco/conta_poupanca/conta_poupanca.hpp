#ifndef CONTA_POUPANCA_HPP
#define CONTA_POUPANCA_HPP

#include "../includes.hpp"

class conta_poupanca : public conta {
private:
	string aniversario;
public:
	conta_poupanca();
	conta_poupanca(string nome, string numero_da_conta, float saldo, string aniversario);
	// setters
	void setAniversario(string aniversario);
	// getters
	string setAniversario();

	void retirada(float valor, string data, string descricao);
	void impressao();
};

#endif