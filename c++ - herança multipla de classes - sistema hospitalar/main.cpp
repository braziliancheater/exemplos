#include "includes.hpp"

#include "enfermeiro/enfermeiro.hpp"
#include "medico/medico.hpp"
#include "pessoas/pessoas.hpp"
#include "turno_de_trabalho/turno_de_trabalho.hpp"

int main() {
    Enfermeiro E1;
    Enfermeiro E2("Gabriel Eler", "123.467.789-01", "78.569.698-8", "2569J7853");
    cout << "Enfermeiro : Nome: " << E2.getNome() << " CPF: " << E2.getCPF() << " RG: " << E2.getRG() << " Registro: " << E2.getRegistro() << endl;

    Medico M1;
    Medico M2("Ronaldo", "123.456.789.01", "78.569.698-8", "2569J7853", "Dermatologista");
    cout << "Medico : Nome: " << M2.getNome() << " CPF: " << M2.getCPF() << " RG: " << M2.getRG() << " Registro: " << M2.getCRM() << " Especialidade: " << M2.getEspecialidade() << endl;

    Pessoas P1; 
    Pessoas P2("Cristiano", "123.456.789.01", "78.569.698-8");
    cout << "Pessoas : Nome: " << P2.getNome() << " CPF: " << P2.getCPF() << " RG: " << P2.getRG() << endl;

    Turno T1;
    Turno T2(M2, E2, "12h", "00h");
    cout << "Turno : Medico Responsavel: " << T2.getMedicoResponsavel().getNome() << " Enfermeiro Responsavel: " << T2.getEnfermeiroResposavel().getNome() << " Hora Inicio: " << T2.getHoraInicio() << " Hora Final: " << T2.getHoraFinal() << endl;

    return 0;
}
