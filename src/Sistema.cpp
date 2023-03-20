
#include "Sistema.h"

void Sistema::mostrarHuesped() {
    unordered_map<int, Huesped*>::iterator itMap;
    cout << "Los huespedes son:\n";

    for (itMap = this->huespedes.begin(); itMap != this->huespedes.end(); ++itMap){
    int llave = itMap->first;
    Huesped* pHuesped = itMap->second;
    cout << "El perro de id " << llave << ", se llama " << pHuesped->getNombreH() << endl;
    }
}

void Sistema::mostrarPropietarios() {
    unordered_map<int, Propietario*>::iterator itMap;
    cout << "Los huespedes son:\n";

    for (itMap = this->propietarios.begin(); itMap != this->propietarios.end(); ++itMap){
        int llave = itMap->first;
        Propietario* pPropietario = itMap->second;
        cout << "El perro de id " << llave << ", se llama " << pPropietario->getNombre() << endl;
    }
}

void Sistema::registrarHuesped(unordered_map <int, Huesped*> huespedes, int id, string nombre, string genero, string nacimiento, string hospital, string lugar){

    Huesped* pHuesped = new Huesped(id, 0 , nombre, genero, nacimiento, hospital, lugar);
    huespedes.insert(make_pair(id, pHuesped));
}

void Sistema::datosHuesped(unordered_map <int, Huesped*> huespedes) {
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

    registrarHuesped(huespedes, id, nombre, genero, nacimiento, hospital, lugar);
}

void Sistema::registrarPropietario(unordered_map <int, Propietario*> propietarios, int id, string nombre, string genero, string nacimiento){

    Propietario* pPropietario = new Propietario(id, 0 , nombre, genero, nacimiento, true);
    propietarios.insert(make_pair(id, pPropietario));
}

void Sistema::datosPropietario(unordered_map <int, Propietario*> propietarios) {
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

    registrarPropietario(propietarios, int id, string nombre, string genero, string nacimiento, true);
}

void Sistema::segundaOpcion(){
    int op;
    cout<< "Seleccione una opcion" << endl;
    cout<< "1. Registrar como huesped" << endl;
    cout<< "2. Registrar como propietario" << endl;

    cin >> op;
    if(op == 1){
        datosHuesped(huespedes);
    }
    else{
        datosPropietario(propietarios);
    }
}