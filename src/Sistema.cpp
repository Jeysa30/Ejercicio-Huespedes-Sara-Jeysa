
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
    cout << "Ingrese genero del propietario " << endl;
    cin >> genero;
    cout << "Ingrese fecha de nacimeinto del propietario " << endl;
    cin >> nacimiento;
    cout << "Ingrese ID del propietario " << endl;
    cin >> id;

    registrarPropietario(id, nombre, genero, nacimiento);
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
    return hospedado;
}


int Sistema::buscarPersona(int Id) {
    unordered_map<int, Huesped*>::iterator itMapH;
    unordered_map<int, Propietario*>::iterator itMapP;
    int persona;

    for(itMapH = this->huespedes.begin(); itMapH != this->huespedes.end(); ++itMapH){
        if(Id == itMapH->first){
            persona = 2;
            return persona;
        }
    }

    for(itMapP = this->propietarios.begin(); itMapP != this->propietarios.end(); ++itMapP){
        if(Id == itMapP->first){
            persona = 1;
            return persona;
        }
    }

    persona = 2;
    return persona;
}

Huesped* Sistema::evaluarH(int id){
    unordered_map<int, Huesped*>::iterator itMapH;

    for (itMapH = this->huespedes.begin(); itMapH != this->huespedes.end(); ++itMapH){
        Huesped* pHuesped = itMapH->second;
        if(id == itMapH->first){
            return pHuesped;
        }
    }
}

Propietario* Sistema::evaluarP(int id){
    unordered_map<int, Propietario*>::iterator itMapH;

    for (itMapH = this->propietarios.begin(); itMapH != this->propietarios.end(); ++itMapH){
        Propietario* pPropietario = itMapH->second;
        if(id == itMapH->first){
            return pPropietario;
        }
    }
}

void Sistema::mReservas() {
    vector<Reserva*>::iterator itVector;
    Propietario* pPropietario;
    Huesped* pHuesped;

    cout << "Las reservas actuales son:\n";
    for (itVector = this->reservas.begin(); itVector != this->reservas.end(); ++itVector){
        mostrarInformacion(*itVector);
    }
}


void Sistema::mostrarInformacion(Reserva* pReserva){
    Propietario* pPropietario;
    Huesped* pHuesped;

    cout << "Propietario:\n";
    pPropietario = evaluarP(pReserva->getIdP());
    cout <<" Nombre: "<<pPropietario->getNombre() << endl;
    cout <<" ID:"<<pPropietario->getId()<< endl;
    cout << "Huesped:\n";
    pHuesped = evaluarH(pReserva->getIdH());
    cout <<" Nombre: "<<pHuesped->getNombreH()<< endl;
    cout <<" ID:"<<pHuesped->getIdH()<< endl;
    cout << "fechas de la reserva:\n";
    cout <<" Inicio: "<<pReserva->getFechaInicio()<< endl;
    cout <<" Fin:"<<pReserva->getFechaFin()<< endl;
}


void Sistema::reservaVector(int IdH, int IdP, string fechaInicio, string fechaFin){
    Propietario* persona;

    persona = this->evaluarP(IdP);

    if(persona->isDisponibilidad() == false){
        cout << "no se puede hospedar" << endl;
    }
    else{
        Reserva* pReserva = new Reserva(fechaInicio, fechaFin, IdH, IdP);
        this->reservas.push_back(pReserva);
        persona->setDisponibilidad(true);
        persona->setActual(pReserva);
    }
}

void Sistema::liberarReserva(Reserva* liberarRe) {
    vector<Reserva*>::iterator itVector;

    itVector = find(this->reservas.begin(), this->reservas.end(), liberarRe);

    if(itVector != this->reservas.end()){
        this->reservas.erase(itVector);
    }

    else{
        cout << "No hay ninguna reserva"<< endl;
    }

}

int Sistema::recogerIdH(int IdP){
    vector<Reserva*>::iterator itVectorRe;

    for (itVectorRe = this->reservas.begin(); itVectorRe != this->reservas.end(); ++itVectorRe){
        Reserva* reservaTemp = *itVectorRe;
        if(IdP == reservaTemp->getIdP()){
            return reservaTemp->getIdH();
        }
    }

}

void Sistema::evaluarPr(int IdP){

    int calificacion;
    string fecha, comentario;
    int IdH = this->recogerIdH(IdP);
    Huesped* huespedTemp = this->evaluarH(IdH);


    cout << "Ingrese la fecha para terminar la estadia " << endl;
    cin >> fecha;
    cout << "Ingrese la calificacion" << endl;
    cin >> calificacion;
    cout << "Ingrese el comentario" << endl;
    cin.ignore();
    getline(cin, comentario, '\n');


    huespedTemp->numPuntajeH(calificacion);

    Evaluacion* evaluacionTemp = new Evaluacion(fecha, comentario, IdP, IdH, calificacion);
    this->evaluacion.push_back(evaluacionTemp);
}
