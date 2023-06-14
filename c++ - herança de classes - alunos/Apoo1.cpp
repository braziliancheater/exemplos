#include "Apoo1.hpp"

Apoo1::Apoo1(){
}

void Apoo1::inserirAluno(Aluno A1, int posicao){
    this->turma7A[posicao] = A1;
}

void Apoo1::removerAluno(string RA){
     Aluno vazio;

     for(int i = 0; i < 4; i++){
        if(this->turma7A[i].getRA() == RA){
            this->turma7A[i] = vazio;
        }
     }
}

void Apoo1::imprimirChamada(){
      for(int i  = 0; i < 4; i++){
        cout<<turma7A[i].getNome()<<endl;
      }
}

void Apoo1::defineRepresentante(string RA){
     for(int i = 0; i < 4; i++){
        if(this->turma7A[i].getRA() == RA){
            this->representante = this->turma7A[i];
        }
     }
}

void Apoo1::imprimirRepresentante(){
    cout<<this->representante.getNome()<<endl;
}
