#include "animal.hpp"

Animal::Animal() { 
    this->nome = " ";
    this->tipo = " ";
    this->quantidade_patas = 0;
}

Animal::Animal(string nome) {
    this->nome = nome;
}

Animal::Animal(string nome, string tipo, int quantidade_patas) {
    this->nome = nome;
    this->tipo = tipo;
    this->quantidade_patas = quantidade_patas;
}

string Animal::getNome() {
    return this->nome;
}
void Animal::setNome(string nome) {
    this->nome = nome;
}