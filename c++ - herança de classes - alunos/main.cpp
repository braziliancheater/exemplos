#include "includes.hpp"
#include "aluno.hpp"
#include "Apoo1.hpp"

int main(){

   Aluno A1("Joao","12345678");
   Aluno A2("Joao3","012345678");
   Aluno A3("Joao2","112345678");
   Aluno A4("Joao1","312345678");

//proibido por encpasulamento
//dos atributos
   //cout<<A1.cpf<<endl;

    Apoo1 t7A;

    t7A.inserirAluno(A1,0);
    t7A.inserirAluno(A2,1);
    t7A.inserirAluno(A3,2);
    t7A.inserirAluno(A4,3);

    t7A.imprimirChamada();

    t7A.removerAluno("112345678");

    cout<<"depois da remocao"<<endl;
    t7A.imprimirChamada();

    t7A.defineRepresentante("312345678");

    cout<<endl;
    cout<<"O representante da sala e: ";
    t7A.imprimirRepresentante();

    return 0;

}
