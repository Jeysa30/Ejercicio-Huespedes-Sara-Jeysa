#include "Sistema.h"

void Sistema::mostrarHuesped() {
    unordered_map<int, Huesped*>::iterator itMap;
    cout << "Los huespedes son:\n";

    for (itMap = this->huespedes.begin(); itMap != this->huespedes.end(); ++itMap){
    int llave = itMap->first;
    Huesped* pHuesped = itMap->second;
    cout << "El Huesped de id " << llave << ", se llama " << pHuesped->getNombreH() << endl;
    }
}

void Sistema::mostrarPropietarios() {
    unordered_map<int, Propietario*>::iterator itMap;
    cout << "Los Propietarios son:\n";

    for (itMap = this->propietarios.begin(); itMap != this->propietarios.end(); ++itMap){
        int llave = itMap->first;
        Propietario* pPropietario = itMap->second;
        cout << "El Propietario de id " << llave << ", se llama " << pPropietario->getNombre() << endl;
    }
}

void Sistema::registrarHuesped(int id, string nombre, string genero, string nacimiento, string hospital, string lugar){

    Huesped* pHuesped = new Huesped(id, 0 , nombre, genero, nacimiento, hospital, lugar);
    this->huespedes.insert(make_pair(id, pHuesped));
}


void Sistema::registrarPropietario(int id, string nombre, string genero, string nacimiento){

    Propietario* pPropietario = new Propietario(id, 0 , nombre, genero, nacimiento, false);
    this->propietarios.insert(make_pair(id, pPropietario));
}

void Sistema::datosHuesped() {
    string nombre, genero, nacimiento, hospital, lugar;
    int id;

    cout << "Ingrese nombre del huesped " << endl;
    cin.ignore();
    getline(cin, nombre, '\n');
    cout << "Ingrese sexo del huesped " << endl;
    cin >> genero;
    cout << "Ingrese fecha de nacimeinto del huesped " << endl;
    cin >> nacimiento;
    cout << "Ingrese hospital relacionado con el huesped" << endl;
    cin.ignore();
    getline(cin, hospital, '\n');
    cout << "Ingrese lugar de origen del huesped " << endl;
    cin.ignore();
    getline(cin, lugar, '\n');
    cout << "Ingrese ID del huesped " << endl;
    cin >> id;

    registrarHuesped(id, nombre, genero, nacimiento, hospital, lugar);
}

void Sistema::datosPropietario() {
    string nombre, genero, nacimiento, hospital, lugar;
    int id;

    cout << "Ingrese nombre del propietario " << endl;
    cin.ignore();
    getline(cin, nombre, '\n');
    cout << "Ingrese sexo del propietario " << endl;
    cin >> genero;
    cout << "Ingrese fecha de nacimeinto del propietario " << endl;
    cin >> nacimiento;
    cout << "Ingrese ID del propietario " << endl;
    cin >> id;

    registrarPropietario(id, nombre, genero, nacimiento);
}

int Sistema::buscaPersona(int id){
    unordered_map<int, Huesped*>::iterator itMapH;
    unordered_map<int, Propietario*>::iterator itMapP;
    int tipoPersona = 0;

    for (itMapH = this->huespedes.begin(); itMapH != this->huespedes.end(); ++itMapH){
        if(id == itMapH->first){
            tipoPersona = 1;
            return tipoPersona;
        }
    }

    for (itMapP = this->propietarios.begin(); itMapP != this->propietarios.end(); ++itMapP){
        if(id == itMapP->first){
            tipoPersona = 0;
            return tipoPersona;
        }
    }
    return tipoPersona = 2;
}

bool Sistema::buscaReserva(int id){
    vector<Reserva*>::iterator itVectorRe;
    bool hospedado = false;

    for (itVectorRe = this->reservas.begin(); itVectorRe != this->reservas.end(); ++itVectorRe){
        if(id == (*itVectorRe)->getIdH()){
            hospedado = true;
            return hospedado;
        }
    }
    return hospedado = false;
}


void Sistema::reservaVector(int IdH, int IdP, string fechaInicio, string fechaFin){
    Reserva* pReserva = new Reserva(fechaInicio, fechaFin, IdH, IdP);

    this->reservas.push_back(pReserva);
}



