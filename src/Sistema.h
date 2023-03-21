
#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_SISTEMA_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_SISTEMA_H

#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include "Huesped.h"
#include "Propietario.h"
#include "Reserva.h"

using namespace std;

class Sistema {
private:
    unordered_map <int, Huesped*> huespedes;
    unordered_map <int, Propietario*> propietarios;
    vector<Reserva*> reservas;

public:
    Sistema() = default;

    void mostrarHuesped();
    void mostrarPropietarios();
    void registrarHuesped(int id, string nombre, string genero, string nacimiento, string hospital, string lugar);
    void registrarPropietario(int id, string nombre, string genero, string nacimiento);
    void datosHuesped();
    void datosPropietario();
    bool buscaReserva(int id);
    void reservaVector(int IdH, int IdP, string fechaInicio, string fechaFin);
    int buscarPersona(int Id);
    Huesped* evaluarH(int id);
    Propietario* evaluarP(int id);
    void mReservas();
    void liberarReserva(Reserva* liberarRe);
    void mostrarInformacion(Reserva* pReserva);
};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_SISTEMA_H
