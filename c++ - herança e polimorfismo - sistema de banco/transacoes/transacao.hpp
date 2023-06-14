#ifndef TRANSACAO_HPP
#define TRANSACAO_HPP

#include "../includes.hpp"

class transacao {
private:
	string data;
	float valor;
	string descricao;
public:
	transacao();
	transacao(string data, float valor, string descricao);
	// setters
	void setData(string data);
	void setValor(float valor);
	void setDescricao(string descricao);
	// getters
	string getData() const;
	float getValor() const;
	string getDescricao() const;
};

#endif