#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Hogar.h"
#include "Evaluacion.h"

using namespace std;

void registrarHuesped(unordered_map <int, Huesped*> huespedes, int id, string nombre, string genero, string nacimiento, string hospital, string lugar){

    Huesped* pHuespedTemp = new Huesped(id, 0 , nombre, genero, nacimiento, hospital, lugar);
    huespedes.insert(make_pair(id, pHuespedTemp));
}

void datosHuesped(unordered_map <int, Huesped*> huespedes) {
    string nombreTemp, sexoTemp, nacimientoTemp, hospitalTemp, origenTemp;
    int idTemp;
    float puntajeEvaluacion;

    cout << "Ingrese nombre del huesped " << endl;
    cin.ignore();
    getline(cin, nombreTemp, '\n');
    cout << "Ingrese sexo del huesped " << endl;
    cin >> sexoTemp;
    cout << "Ingrese fecha de nacimeinto del huesped " << endl;
    cin >> nacimientoTemp;
    cout << "Ingrese hospital relacionado con el huesped" << endl;
    cin.ignore();
    getline(cin, hospitalTemp, '\n');
    cout << "Ingrese lugar de origen del huesped " << endl;
    cin.ignore();
    getline(cin, origenTemp, '\n');
    cout << "Ingrese ID del huesped " << endl;
    cin >> idTemp;

    registrarHuesped(huespedes, idTemp, nombreTemp, sexoTemp, nacimientoTemp, hospitalTemp, origenTemp);
}

void datosPropietario(unordered_map <int, Propietario*> propietarios) {
    string nombreTemp, sexoTemp, nacimientoTemp, hospitalTemp, origenTemp;
    int idTemp;
    float puntajeEvaluacion;

    cout << "Ingrese nombre del huesped " << endl;
    cin.ignore();
    getline(cin, nombreTemp, '\n');
    cout << "Ingrese sexo del huesped " << endl;
    cin >> sexoTemp;
    cout << "Ingrese fecha de nacimeinto del huesped " << endl;
    cin >> nacimientoTemp;
    cout << "Ingrese hospital relacionado con el huesped" << endl;
    cin.ignore();
    getline(cin, hospitalTemp, '\n');
    cout << "Ingrese lugar de origen del huesped " << endl;
    cin.ignore();
    getline(cin, origenTemp, '\n');
    cout << "Ingrese ID del huesped " << endl;
    cin >> idTemp;

}

void segundaOpcion(unordered_map <int, Huesped*> huespedes, unordered_map <int, Propietario*> propietarios){
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

void mostrarMenu() {
    int opc = 0;
    int id = 1;
    unordered_map <int, Huesped*> huespedes;
    unordered_map <int, Propietario*> propietarios;
    vector <Reserva*> reservas;

    do
    {
        cout << "\n----Aplicacion Airbnb----" << endl;

        cout << "1. Inicia sesion.\n";
        cout << "2. Crea un usuario.\n";
        cout << "3. Lista de Reservas.\n";
        cout << "4. Lista de Personas asociadas.\n";
        cout << "5. Lista de evaluaciones.\n";
        cout << "0. Salir\n" << endl;

        cin >> opc;

        switch (opc)
        {
            case 1:
                cout << "Ingresar ID persona" << endl;
                cin >> id;
                break;

            case 2:
                segundaOpcion(huespedes, propietarios);
                break;


            default:
                break;
        }
    } while (opc != 0);
}

int main(){

}
