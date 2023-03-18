
#include "Reserva.h"

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

void Reserva::SetPropietario(Propietario* pPropietario){
    this->pPropietario = pPropietario;
}

Propietario *Reserva::GetPropietario(){
    return this->pPropietario;
}

void Reserva::SetHuesped(Huesped* pHuesped){
    this->pHuesped = pHuesped;
}

Huesped *Reserva::GetHuesped(){
    return this->pHuesped;
}