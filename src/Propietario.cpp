//
// Created by jeysa nahara on 17/03/2023.
//

#include "Propietario.h"

string Propietario::getNombre(){
    return nombre;
}

void Propietario::setNombre(string nombre) {
    Propietario::nombre = nombre;
}


string Propietario::getGenero(){
    return genero;
}

void Propietario::setGenero(string genero) {
    Propietario::genero = genero;
}



string &Propietario::getNacimiento(){
    return nacimiento;
}

void Propietario::setNacimiento(string nacimiento) {
    Propietario::nacimiento = nacimiento;
}



float Propietario::getPuntaje(){
    return puntaje;
}

void Propietario::setPuntaje(float puntaje) {
    Propietario::puntaje = puntaje;
}



int Propietario::getId(){
    return ID;
}

void Propietario::setId(int id) {
    ID = id;
}



bool Propietario::isNoDisponible(){
    return noDisponible;
}

void Propietario::setNoDisponible(bool noDisponible) {
    Propietario::noDisponible = noDisponible;
}
