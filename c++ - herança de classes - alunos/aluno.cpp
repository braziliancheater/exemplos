#include "includes.hpp"
#include "aluno.hpp"

Aluno::Aluno(){
    this->nome = " ";
    this->RA = " ";
    this->cursos[0] = " ";
    this->cursos[1] = " ";
    this->periodo = " ";
    this->cpf = " ";
}

Aluno::Aluno(string nome, string RA){
    this->nome = nome;
    this->RA = RA;
    this->cursos[0] = " ";
    this->cursos[1] = " ";
    this->periodo = " ";
    this->cpf = " ";
}
string Aluno::getNome(){
    return this->nome;
}
string Aluno::getCPF(){
    return this->cpf;
}

string Aluno::getCurso(int numCurso){
     return this->cursos[numCurso];
}

string Aluno::getPeriodo(){
     return this->periodo;
}

string Aluno::getRA(){
     return this->RA;
}


void Aluno::setNome(string nome){
     this->nome = nome;
}

void Aluno::setRA(string RA){
     this->RA = RA;
}
void Aluno::setCPF(string CPF){
     this->cpf=CPF;
}
void Aluno::setCurso(string nome, int numCurso){
    this->cursos[numCurso] = nome;
}
void Aluno::setPeriodo(string periodo){
    this->periodo = periodo;
}
