#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_PROPIETARIO_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_PROPIETARIO_H

#include <string>
#include <iostream>
#include "Hogar.h"
#include "Reserva.h"

using namespace std;

class Propietario {
private:
    string nombre;
    string genero;
    string nacimiento;
    float puntaje;
    int ID;
    bool disponibilidad;
    Hogar* pHogar;
    Reserva* actual;

public:

    Propietario() = default;
    Propietario(int ID, float puntaje, string nombre, string genero, string nacimiento, bool disponibilidad);

    string getNombre();

    void setNombre(string nombre);
    string getGenero();

    void setGenero(string genero);
    string getNacimiento();

    void setNacimiento(string nacimiento);
    float getPuntaje();

    void setPuntaje(float puntaje);
    int getId();

    void setId(int id);
    bool isDisponibilidad();

    void setDisponibilidad(bool disponibilidad);
    void SetHogar(Hogar* pHogar);

    Hogar* GetHogar();
    void numPuntajeP(int num);

    void agregarCasa(int camas, bool bebes, string direccion, string descripcion);

    Reserva *getActual();
    void setActual(Reserva *actual);

};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_PROPIETARIO_H
