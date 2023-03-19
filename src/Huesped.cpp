#include "Huesped.h"

Huesped::Huesped(int IdH, float puntajeH, string nombreH, string generoH, string nacimientoH, string clinicaH, string lugarH): IdH(IdH), puntajeH(puntajeH), nombreH(nombreH), generoH(generoH), nacimientoH(nacimientoH), clinicaH(clinicaH), lugarH(lugarH){}

string Huesped::getNombreH(){
    return nombreH;
}

void Huesped::setNombreH(string nombreH) {
    Huesped::nombreH = nombreH;
}

string Huesped::getGeneroH(){
    return generoH;
}

void Huesped::setGeneroH(string generoH) {
    Huesped::generoH = generoH;
}

string Huesped::getNacimientoH(){
    return nacimientoH;
}

void Huesped::setNacimientoH(string nacimientoH) {
    Huesped::nacimientoH = nacimientoH;
}

string Huesped::getClinicaH(){
    return clinicaH;
}

void Huesped::setClinicaH(string clinicaH) {
    Huesped::clinicaH = clinicaH;
}

string Huesped::getLugarH(){
    return lugarH;
}

void Huesped::setLugarH(string lugarH) {
    Huesped::lugarH = lugarH;
}

float Huesped::getPuntajeH(){
    return puntajeH;
}

void Huesped::setPuntajeH(float puntajeH) {
     Huesped::puntajeH = puntajeH;
}

int Huesped::getIdH(){
    return IdH;
}

void Huesped::setIdH(int idH) {
    IdH = idH;
}

void Huesped::numPuntajeH(int num){

    if(this->puntajeH == 0){
        this->puntajeH = num;
    }

    else{
        this->puntajeH = (this->puntajeH + num)/2;
    }
}
