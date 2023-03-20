#include "Propietario.h"

Propietario::Propietario(int ID, float puntaje, string nombre, string genero, string nacimiento, bool noDisponible): ID(ID), puntaje(puntaje), nombre(nombre), genero(genero), nacimiento(nacimiento), noDisponible(noDisponible){}

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

string Propietario::getNacimiento(){
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

Hogar *Propietario::GetHogar() {
    return this->pHogar;
}

//METODOS//

void Propietario::numPuntajeP(int num){;

    if(this->puntaje == 0){
        this->puntaje = num;
    }

    else{
        this->puntaje = (this->puntaje + num)/2;
    }

}

void Propietario::agregarCasa(int camas, bool bebes, string direccion, string descripcion){
    this->pHogar = new Hogar(camas, bebes, direccion, descripcion);
}
