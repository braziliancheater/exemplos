#ifndef APOO1_HPP
#define APOO1_HPP

#include "includes.hpp"
#include "aluno.hpp"

class Apoo1{
private:
    //composicao
    Aluno turma7A[4];
    //agregacao
    Aluno representante;

public:
    Apoo1();
    void inserirAluno(Aluno A1, int posicao);
    void removerAluno(string RA);
    void imprimirChamada();
    void defineRepresentante(string RA);
    void imprimirRepresentante();

};



#endif // APOO1_HPP
