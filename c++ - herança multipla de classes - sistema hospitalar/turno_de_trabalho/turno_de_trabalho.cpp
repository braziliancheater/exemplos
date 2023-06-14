#include "turno_de_trabalho.hpp"

Turno::Turno() {
	// dummy
}

Turno::Turno(Medico medicoResponsavel, Enfermeiro enfermeiroResponsavel, string horaInicio, string horaFinal) : Medico(medicoResponsavel), Enfermeiro(enfermeiroResponsavel) {
	this->medicoResponsavel = medicoResponsavel;
	this->enfermeiroResponsavel = enfermeiroResponsavel;
	this->horaInicio = horaInicio;
	this->horaFinal = horaFinal;
}

Medico Turno::getMedicoResponsavel() {
	return this->medicoResponsavel;
}

Enfermeiro Turno::getEnfermeiroResposavel() {
	return this->enfermeiroResponsavel;
}

string Turno::getHoraInicio() {
	return this->horaInicio;
}

string Turno::getHoraFinal() {
	return this->horaFinal;
}

void Turno::setMedicoResponsavel(Medico medicoResposanvel) {
	this->medicoResponsavel = medicoResponsavel;
}

void Turno::setEnfermeiroResponsavel(Enfermeiro enfermeiroResponsavel) {
	this->enfermeiroResponsavel = enfermeiroResponsavel;
}

void Turno::setHoraInicio(string horaInicio) {
	this->horaInicio = horaInicio;
}

void Turno::setHoraFinal(string horaFinal) {
	this->horaFinal = horaFinal;
}

