#ifndef AVIAO_MONOMOTOR_HPP
#define AVIAO_MONOMOTOR_HPP

#include "../includes.hpp"
#include "../aeronave/aeronave.hpp"

class aviao_monomotor : public Aeronave {
public:
	string nome;
	string marca;
private:
	aviao_monomotor();
	aviao_monomotor(string nome, string marca);
	string getNome();
	string getMarca(); // virtual
};

#endif