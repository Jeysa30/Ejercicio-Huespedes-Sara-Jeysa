#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_RESERVA_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_RESERVA_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Huesped.h"
#include "Sistema.h"

using namespace std;

class Reserva {
private:
    string fechaInicio;
    string fechaFin;
    Propietario* pPropietario;
    Huesped* pHuesped;

public:
    Reserva() = default;

    string getFechaInicio();
    void setFechaInicio(string fechaInicio);

    string getFechaFin();
    void setFechaFin(string fechaFin);

    void SetPropietario(Propietario* pPropietario);
    Propietario* GetPropietario();

    void SetHuesped(Huesped* pHuesped);
    Huesped* GetHuesped();
};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_RESERVA_H
