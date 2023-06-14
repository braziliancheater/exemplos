#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "../includes.hpp" 

class Animal {
private:
    string nome;
    string tipo;
    int quantidade_patas;
public:
    Animal();
    Animal(string nome);
    Animal(string nome, string tipo, int quantidade_patas);
    string getNome();
    void setNome(string nome);
};

#endif 