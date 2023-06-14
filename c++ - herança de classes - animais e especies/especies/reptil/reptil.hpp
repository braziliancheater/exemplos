#ifndef REPTIL_HPP
#define REPTIL_HPP

#include "../../animal/animal.hpp"

class Reptil:public Animal {
private:
	string nome;
public:
	Reptil();
	Reptil(string nome);
	string getNome();
	void setNome(string nome);
};

#endif 
