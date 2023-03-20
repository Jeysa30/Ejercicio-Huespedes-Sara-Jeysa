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

void primeraOpcion(int id, Sistema* pSistemaApp){
    string fechaInTemp;
    string fechaFiTemp;
    int id2;
    bool hospedado = false;
    int tipoPersona = 0;
    // 1-Huesped
    // 0-Propietario

    tipoPersona = pSistemaApp->buscaPersona(id);

    if(tipoPersona == 1){

        hospedado = pSistemaApp->buscaReserva(id);

        if(hospedado == true){
            int op;
            cout<< "1.Evaluar" << endl;
            cout<< "0.Salir" << endl;

            cin >> op;
            if(op == 1){

            }
        }
        else{
            cout<< "Crea tu reserva" << endl;

            cout<< "Ingrese fecha inicio de la estadia" << endl;
            cin >> fechaInTemp;

            cout<< "Ingrese fecha fin de la estadia" << endl;
            cin >> fechaFiTemp;

            cout<< "Ingrese ID del propietario" << endl;
            cin >> id2;
        }
    }
    else{
        int op;
        cout<< "1.Terminar estadia" << endl;
        cout<< "0.Salir" << endl;

        cin >> op;
        if(op == 1){

        }

    }
}

void segundaOpcion(Sistema* pSistemaAp){
    int op;
    cout<< "Seleccione una opcion" << endl;
    cout<< "1. Registrar como huesped" << endl;
    cout<< "2. Registrar como propietario" << endl;

    cin >> op;
    if(op == 1){
        pSistemaAp->datosHuesped();
    }
    else{
        pSistemaAp->datosPropietario();
    }
}

void mostrarMenu() {
    int opc = 0;
    int id = 1;
    unordered_map <int, Huesped*> huespedes;
    unordered_map <int, Propietario*> propietarios;
    vector <Reserva*> reservas;
    Sistema* pSistemaAp;

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
                segundaOpcion(pSistemaAp);
                break;


            default:
                break;
        }
    } while (opc != 0);
}

int main(){

}
