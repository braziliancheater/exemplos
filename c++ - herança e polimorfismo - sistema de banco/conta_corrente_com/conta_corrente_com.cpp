#include "conta_corrente_com.hpp"

conta_corrente_com::conta_corrente_com() {

}

conta_corrente_com::conta_corrente_com(string nome, string numero_da_conta, float saldo, float limite) : conta(nome, numero_da_conta, saldo) {
	this->limite = limite;
}

void conta_corrente_com::setLimite(float limite) {
	this->limite = limite;
}

float conta_corrente_com::getLimite() {
	return this->limite;
}

void conta_corrente_com::retirada(float valor, string data, string descricao) {

}
