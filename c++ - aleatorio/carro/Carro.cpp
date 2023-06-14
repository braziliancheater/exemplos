#include "Carro.hpp"
#include <unistd.h>

//construtor default
Carro::Carro(){
	this->nome = " ";
	this->cor = " ";
	this->numeroPortas = 0;
}

//construtor parametrico
Carro::Carro(string cor, string nome, int numeroPortas){
	this->nome = nome;
	this->cor = cor;
	this->numeroPortas = numeroPortas;
}

//método getter para atributo cor
string Carro::getCor(){
	return this->cor;
}

//método getter para atributo nome
string Carro::getNome(){
	return this->nome;
}

//método getter para atributo numeroPortas
int Carro::getNumeroPortas(){
	return this->numeroPortas;
}

void Carro::setNome(string nome) {
    this->nome = nome;
}

void Carro::setCor(string cor) {
    this->cor = cor;
}

void Carro::setNumeroPortas(int portas) {
    this->numeroPortas = portas;
}

void Carro::acelerar() {
    cout << "acelerando... 0 a 100 em 3 segundos!" << endl;
    sleep(3);
    cout << "100km/h!" << endl;
}
    
void Carro::abrirPortas(bool aberto) {
    if (aberto) cout << "Portas abertas! com sucesso" << endl;
    else cout << "Portas fechadas! com sucesso" << endl;
}

