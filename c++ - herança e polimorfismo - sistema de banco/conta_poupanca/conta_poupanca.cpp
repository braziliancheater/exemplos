#include "conta_poupanca.hpp"

conta_poupanca::conta_poupanca() {

}

conta_poupanca::conta_poupanca(string nome, string numero_da_conta, float saldo, string aniversario) {
	this->aniversario = aniversario;
}


void conta_poupanca::setAniversario(string aniversario) {
	this->aniversario = aniversario;
}

string conta_poupanca::setAniversario() {
	return this->aniversario;
}