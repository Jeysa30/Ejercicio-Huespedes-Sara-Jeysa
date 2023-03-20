#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_RESERVA_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_RESERVA_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Huesped.h"

using namespace std;

class Reserva {
private:
    string fechaInicio;
    string fechaFin;
    int IdH;
    int IdP;

public:

    Reserva() = default;

    Reserva(string fechaInicio, string fechaFin, int IdH, int IdP);

    int getIdH();
    void setIdH(int idH);

    int getIdP();
    void setIdP(int idP);

    string getFechaInicio();
    void setFechaInicio(string fechaInicio);

    string getFechaFin();
    void setFechaFin(string fechaFin);

    Reserva* crearReserva(int idH);
};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_RESERVA_H
