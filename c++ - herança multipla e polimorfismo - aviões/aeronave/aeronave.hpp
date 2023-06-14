#ifndef AERONAVE_HPP
#define AERONAVE_HPP

#include "../includes.hpp"

class Aeronave {
private:
	string nome;
	int numero_de_motores;
public:
	Aeronave();
	Aeronave(string nome, int numero_de_motores);
	//getters
	virtual string getNome() = 0;
	int getMotores();
	//setters
	void setNome(string nome);
	void setMotores(int numero_de_motores);
};

#endif