
#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_SISTEMA_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_SISTEMA_H

#include <string>
#include <iostream>
#include <unordered_map>
#include "Huesped.h"
#include "Propietario.h"


using namespace std;

class Sistema {
private:
    unordered_map <int, Huesped*> huespedes;
    unordered_map <int, Propietario*> propietarios;
public:
    Sistema();

    void mostrarHuesped();
    void mostrarPropietarios();
    void registrarHuesped(int id, string nombre, string genero, string nacimiento, string hospital, string lugar);
    void datosHuesped(unordered_map <int, Huesped*> huespedes);
    void registrarPropietario(int id, string nombre, string genero, string nacimiento, string hospital, string lugar);
    void datosPropietario(unordered_map <int, Propietario*> propietarios);
    void segundaOpcion();
};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_SISTEMA_H
