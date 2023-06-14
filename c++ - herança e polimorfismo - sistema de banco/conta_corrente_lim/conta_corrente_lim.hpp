#include "../includes.hpp"

class conta_corrente_lim : public conta {
private:
	float limite();
public:
	conta_corrente_lim();
	conta_corrente_lim(string nome, string numero_da_conta, float saldo, float limite);
	void getLimite() const;
	void setLimite(float valor);
	void retirada(float valor, string data, string descricao);
	void impressao();
};