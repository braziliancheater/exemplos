#ifndef MAMIFERO_HPP
#define MAMIFERO_HPP

#include "../../animal/animal.hpp"

class Mamifero:public Animal {
private:
	string nome;
public:
	Mamifero();
	Mamifero(string nome);
	string getNome();
	void setNome(string nome);
};

#endif 