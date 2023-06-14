#ifndef  CONTA_CORRENTE_COM_HPP
#define CONTA_CORRENTE_COM_HPP

#include "../includes.hpp"

class conta_corrente_com : public conta {
private:
	//int numero_de_conta;
	//string nome_correntista;
	//float saldo;
	float limite;
public:
	conta_corrente_com();
	conta_corrente_com(string nome, string numero_da_conta, float saldo, float limite);
	//void setNumeroConta(int numero_de_conta);
	//void setNome(string nome_correntista);
	//void setSaldo(float saldo);
	// getters
	void setLimite(float limite);
	float getLimite();

	void retirada(float valor, string data, string descricao);
	void impressao();
};

#endif 
