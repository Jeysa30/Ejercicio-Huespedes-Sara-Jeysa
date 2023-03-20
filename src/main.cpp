#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Hogar.h"
#include "Evaluacion.h"
#include "Sistema.h"

using namespace std;

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
