
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
    Propietario::ID = id;
}



bool Propietario::isNoDisponible(){
    return noDisponible;
}

void Propietario::setNoDisponible(bool noDisponible) {
    Propietario::noDisponible = noDisponible;
}
