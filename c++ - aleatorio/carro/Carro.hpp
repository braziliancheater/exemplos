/* impedindo a redefiniçao de classe, caso
   incluido mais de uma vez */
#ifndef CARRO_HPP
#define CARRO_HPP

#include <iostream>
#include <string>

using namespace std;

class Carro {
    /* atributos */
private:
    string nome;
    string cor;
    int numeroPortas;
    /* metodos */
public:
    Carro(); //construtor default
    Carro(string cor, string nome, int numeroPortas); //construtor parametrico
    void setNome(string nome);
    void setCor(string cor);
    void setNumeroPortas(int numeroPortas);
    string getNome();
    string getCor();
    int getNumeroPortas();
    void acelerar();
    void abrirPortas(bool aberto);
};

#endif