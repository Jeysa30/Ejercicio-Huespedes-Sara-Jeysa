
#include "Hogar.h"

string Hogar::getDireccion(){
    return direccion;
}

void Hogar::setDireccion(string direccion) {
    Hogar::direccion = direccion;
}

string Hogar::getDescripcion(){
    return descripcion;
}

void Hogar::setDescripcion(string descripcion){
    Hogar::descripcion = descripcion;
}

bool Hogar::isBebes(){
    return bebes;
}

void Hogar::setBebes(bool bebes) {
     Hogar::bebes = bebes;
}

int Hogar::getCamas(){
    return camas;
}

void Hogar::setCamas(int camas) {
    Hogar::camas = camas;
}