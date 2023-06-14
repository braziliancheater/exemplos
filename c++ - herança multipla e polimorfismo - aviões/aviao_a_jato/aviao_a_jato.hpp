#ifndef AVIAO_A_JATO_HPP
#define AVIAO_A_JATO_HPP

#include "../includes.hpp"
#include "../aeronave/aeronave.hpp"

class aviao_a_jato : public Aeronave {
private:
	string marca;
	int quantidade_de_jatos;
public:
	aviao_a_jato();
	aviao_a_jato(string marca, int quantidade_de_jatos);
	//getters
	string getMarca(); // virtual
	int getJatos();
	//setters
	void setMarca(string marca);
	void setJatos(int quantidade_de_jatos);
};

#endif 