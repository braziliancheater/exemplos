#include <iostream>
#include <vector>

using namespace std;

class Aluno {
private:
    //atributos da classe
    string cpf;
    string nome;
    string matricula;
public:
    //metodos da classe
    Aluno();
    Aluno(string nome);
    void setNome(string nome);
    void setMatricula(string matricula);
    void setCpf(string cpf);
    string getNome() const;
    string getMatricula() const;
    string getCpf() const;
};

//construtor deafult (padrão)
Aluno::Aluno() {
    this->cpf = " ";
    this->nome = " ";
    this->matricula = " ";
}

//construtor parametrico
Aluno::Aluno(string nome) {
    this->cpf = " ";
    this->nome = nome;
    this->matricula = " ";
}

void Aluno::setNome(string nome) {
    this->nome = nome;
}

void Aluno::setCpf(string cpf) {
    this->cpf = cpf;
}

void Aluno::setMatricula(string matricula) {
    this->matricula = matricula;
}

string Aluno::getCpf() const {
    return this->cpf;
}

string Aluno::getMatricula() const {
    return this->matricula;
}

string Aluno::getNome() const {
    return this->nome;
}


class Cadastro {
private:
    //composição - a classe cadastro contém alunos
    vector<Aluno> bancoDeAlunos;

public:
    Cadastro();
    void cadastrarAluno();
    void imprimeAlunos();
};

Cadastro::Cadastro() {
    cout << "seja bem vindo ao cadastro de alunos" << endl;
}

void Cadastro::cadastrarAluno() {

    /* Jeito GAMBIARRA
    string temp;
    cout << "Digite o nome do aluno" << endl;
    cin >> temp;
    this->A1.setNome(temp);
    cout << "Digite o cpf do aluno" << endl;
    cin >> temp;
    this->A1.setCpf(temp);
    cout << "Digite o matricula do aluno" << endl;
    cin >> temp;
    this->A1.setMatricula(temp);
    */

    Aluno Atemp;
    string temp;
    cout << "Digite o nome do aluno" << endl;
    cin >> temp;
    Atemp.setNome(temp);
    cout << "Digite o cpf do aluno" << endl;
    cin >> temp;
    Atemp.setCpf(temp);
    cout << "Digite o matricula do aluno" << endl;
    cin >> temp;
    Atemp.setMatricula(temp);

    //insere no final do vetor de alunos
    this->bancoDeAlunos.push_back(Atemp);

}

void Cadastro::imprimeAlunos() {
    for (int i = 0; i < this->bancoDeAlunos.size(); i++)
    {
        cout << "Nome: " << this->bancoDeAlunos[i].getNome() << endl;
        cout << "Matricula: " << this->bancoDeAlunos[i].getMatricula() << endl;
        cout << "Cpf: " << this->bancoDeAlunos[i].getCpf() << endl;
    }
}

class Bolsista : public Aluno {
private:
    vector<Aluno> bancoDeBolsistats;
public:
    //metodos da classe
    Bolsista();
    void cadastraBolsistas();
    void imprimeBolsistas();
};

Bolsista::Bolsista() {
    cout << "Seja bem vindo ao cadastro de bolsistas" << endl;
}

void Bolsista::cadastraBolsistas() {

    Aluno Atemp;
    string temp;
    cout << "Digite o nome do aluno" << endl;
    cin >> temp;
    Atemp.setNome(temp);
    cout << "Digite o cpf do aluno" << endl;
    cin >> temp;
    Atemp.setCpf(temp);
    cout << "Digite o matricula do aluno" << endl;
    cin >> temp;
    Atemp.setMatricula(temp);

    //insere no final do vetor de alunos
    this->bancoDeBolsistats.push_back(Atemp);
}

void Bolsista::imprimeBolsistas() {
    for (int i = 0; i < this->bancoDeBolsistats.size(); i++) {
        cout << "Nome: " << this->bancoDeBolsistats[i].getNome() << endl;
        cout << "Matricula: " << this->bancoDeBolsistats[i].getMatricula() << endl;
        cout << "Cpf: " << this->bancoDeBolsistats[i].getCpf() << endl;
    }
}

class Mensalista : public Aluno {
private:
    vector<Aluno> bancoDeMensalista;
public:
    //metodos da classe
    Mensalista();
    void cadastraMensalista();
    void imprimeMensalista();
};

Mensalista::Mensalista() {
    cout << "Seja bem vindo ao cadastro de mensalistas" << endl;
}

void Mensalista::cadastraMensalista() {

    Aluno Atemp;
    string temp;
    cout << "Digite o nome do aluno" << endl;
    cin >> temp;
    Atemp.setNome(temp);
    cout << "Digite o cpf do aluno" << endl;
    cin >> temp;
    Atemp.setCpf(temp);
    cout << "Digite o matricula do aluno" << endl;
    cin >> temp;
    Atemp.setMatricula(temp);

    //insere no final do vetor de alunos
    this->bancoDeMensalista.push_back(Atemp);
}

void Mensalista::imprimeMensalista() {
    for (int i = 0; i < this->bancoDeMensalista.size(); i++) {
        cout << "Nome: " << this->bancoDeMensalista[i].getNome() << endl;
        cout << "Matricula: " << this->bancoDeMensalista[i].getMatricula() << endl;
        cout << "Cpf: " << this->bancoDeMensalista[i].getCpf() << endl;
    }
}

int main() {

    Cadastro C1;

    C1.cadastrarAluno();
    C1.cadastrarAluno();
    C1.imprimeAlunos();

    int resp;
    cout << "E bolsista?: (1 = SIM/2 = NAO)";
    cin >> resp;

    switch (resp) {

        case 1: {
            Bolsista b22;
            b22.cadastraBolsistas();
            b22.imprimeBolsistas();
        break;
        }
        case 2: {
            Mensalista m17;
            m17.cadastraMensalista();
            m17.imprimeMensalista();
            break;
        }
    }

    return 0;
}