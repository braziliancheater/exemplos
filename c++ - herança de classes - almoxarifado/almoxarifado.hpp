#ifndef ALMOXARIFADO_HPP
#define ALMOXARIFADO_HPP

#include "produto.hpp"

class Almoxarifado {
private:
    Produto vetorProd[5];
public:
    Almoxarifado();
    void insereProduto(Produto P1, int posicao);
    void removeProduto(int posicao);
    void imprimeProduto();
};

Almoxarifado::Almoxarifado() { }

void Almoxarifado::insereProduto(Produto P1, int posicao) {
    this->vetorProd[posicao] = P1;
}

void Almoxarifado::imprimeProduto() {
    for (int i = 0; i < 5; i++) {
        cout << this->vetorProd[i].getTipo() << endl;
    }
}

void Almoxarifado::removeProduto(int posicao) {
    this->vetorProd[posicao] = "";
}

#endif