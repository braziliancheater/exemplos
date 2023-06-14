#ifndef TURNO_DE_TRABALHO_HPP
#define TURNO_DE_TRABALHO_HPP

#include "../includes.hpp"
#include "../enfermeiro/enfermeiro.hpp"
#include "../medico/medico.hpp"

class Turno : public Enfermeiro, public Medico {
private:
	Medico medicoResponsavel;
	Enfermeiro enfermeiroResponsavel;
	string horaInicio;
	string horaFinal;
public:
	Turno();
	Turno(Medico medicoResponsavel, Enfermeiro enfermeiroResponsavel, string horaInicio, string horaFinal);
	Medico getMedicoResponsavel();
	Enfermeiro getEnfermeiroResposavel();
	string getHoraInicio();
	string getHoraFinal();
	void setMedicoResponsavel(Medico medicoResposanvel);
	void setEnfermeiroResponsavel(Enfermeiro enfermeiroResposavel);
	void setHoraInicio(string horaInicio);
	void setHoraFinal(string horaFinal);
};

#endif