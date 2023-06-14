#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
using namespace std;

class Produto {
private:
    int codigo;
    float preco;
    string tipo;
public:
    Produto();
    Produto(int codigo, float preco, string tipo);
    void getPreco();
    
    int getCodigo();
    
    string getTipo();
    void setTipo(string tipo);
};

Produto::Produto() { }

Produto::Produto(int codigo, float preco, string tipo) {
    this->preco = preco;
    this->codigo = codigo;
    this->tipo = tipo;
}

void Produto::setTipo(string tipo) {
    this->tipo = tipo;
}

string Produto::getTipo() {
    return this->tipo;
}

#endif
