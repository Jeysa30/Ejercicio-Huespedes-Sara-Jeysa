#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

void mostrarMenu() {
    int opc = 0;
    int id = 1;
    int edad;
    int adoptar;
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

                break;

            case 2:
                int usuario = 0;
                cout << "1. Propietario.\n";
                cout << "2. Huesped.\n" << endl;

                cin >> usuario
                break;

            case 3:
                cout << "Ingrese la id del perro que quiere buscar: ";
                cin >> id;
                cout << "El perro con id " << id << endl;
                if(->idVector(id)){
                    cout << "--Si se encontro" << endl;
                }
                else{
                    cout << " No se encontro" << endl;
                }
                break;

            case 4:
                cout << "Ingrese la edad minima de los perros que quieres listar: ";
                cin >> edad;
                ->listaPerros(edad);
                break;

            case 5:
                cout << "Ingrese la id del perro que quiere adoptar: ";
                cin >> adoptar;
                ->adopcion(adoptar);
                break;

            default:
                break;
        }
    } while (opc != 0);
}

int main(){

}
