#include <iostream>
#include <string>
#include "Sistema.h"
#include "Sistema.cpp"

using namespace std;

void primeraOpcion(int id, Sistema* pPuntero){
    string fechaInTemp;
    string fechaFiTemp;
    int id2;
    bool hospedado;
    int tipoPersona;
    Propietario* pPropietario;
    Huesped* pHuesped;
    Sistema* pSistema;

    tipoPersona = pPuntero->buscarPersona(id);

    if(tipoPersona == 2){

        hospedado = pPuntero->buscaReserva(id);

        if(hospedado == true){
            int op;
            cout<< "1.Evaluar" << endl;
            cout<< "0.Salir" << endl;

            cin >> op;
            if(op == 1){
                pSistema->evaluarPr(id);
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

        pPropietario = pPuntero->evaluarP(id);
        int op, op1, op2;

        if(pPropietario->isDisponibilidad() == true){

            cout << "1.Evaluar la estadia." << endl;
            cout << "0.Salir" << endl;
            cin >> op;

            if(op == 1){
                pSistema->evaluarPr(id);
            }
        }

        else{
            cout << "1.Acabar la reserva." << endl;
            cout << "2.Evaluar la estadia." << endl;
            cout << "0.Salir" << endl;
            cin >> op1;

            if(op1 == 1){
                //cout << "Informacion de la reserva: " << endl;

                //pPuntero->mostrarInformacion(pPropietario->getActual());

                cout << "1.Terminar reserva" << endl;
                cout << "0. Salir" << endl;
                cin >> op2;

                if(op2 == 1){
                    pPuntero->liberarReserva(pPropietario->getActual());
                    pPropietario->setDisponibilidad(true);
                    pPropietario->setActual(NULL);

                }
            }

            else if(op1 == 2){
                pSistema->evaluarPr(id);
            }
        }
    }
}

void segundaOpcion(Sistema* pSistemaApp){
    int op;
    cout<< "Seleccione una opcion" << endl;
    cout<< "1. Registrar como huesped" << endl;
    cout<< "2. Registrar como propietario" << endl;

    cin >> op;
    if(op == 1){
        pSistemaApp->datosHuesped();
    }
    else{
        pSistemaApp->datosPropietario();
    }
}

void mostrarMenu(Sistema* pSistemaApp) {
    int opc = 0;
    int id = 0;

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
                primeraOpcion(id,pSistemaApp);

                break;

            case 2:
                segundaOpcion(pSistemaApp);
                break;
            case 3:
                pSistemaApp->mostrarHuesped();
                pSistemaApp->mostrarPropietarios();
                break;
            case 5:

            default:
                break;
        }
    } while (opc != 0);
}

int main(){
    Sistema* pSistemaApp = new Sistema();
    mostrarMenu(pSistemaApp);
    delete pSistemaApp;
    return 0;
}
