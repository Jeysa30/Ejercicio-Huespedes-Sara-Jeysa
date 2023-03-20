
#include "Reserva.h"

Reserva::Reserva(string fechaInicio, string fechaFin, int IdH, int IdP): IdH(IdH), IdP(IdP), fechaInicio(fechaInicio), fechaFin(fechaFin){}

string Reserva::getFechaInicio(){
    return fechaInicio;
}

void Reserva::setFechaInicio(string fechaInicio) {
    Reserva::fechaInicio = fechaInicio;
}

string Reserva::getFechaFin(){
    return fechaFin;
}

void Reserva::setFechaFin(string fechaFin) {
    Reserva::fechaFin = fechaFin;
}


int Reserva::getIdP(){
    return IdP;
}

void Reserva::setIdP(int idP) {
    IdP = idP;
}

int Reserva::getIdH(){
    return IdH;
}

void Reserva::setIdH(int idH) {
    IdH = idH;
}
