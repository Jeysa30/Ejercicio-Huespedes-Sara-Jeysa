//
// Created by jeysa nahara on 17/03/2023.
//

#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_PROPIETARIO_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_PROPIETARIO_H

#include <string>
#include <iostream>

using namespace std;

class Propietario {
private:
    string nombre;
    string genero;
    string nacimiento;
    float puntaje;
    int ID;
    bool noDisponible;
public:

    string getNombre();
    void setNombre(string nombre);

    string &getGenero();
    void setGenero(string genero);

    string &getNacimiento();
    void setNacimiento(string nacimiento);

    float getPuntaje();
    void setPuntaje(float puntaje);

    int getId();
    void setId(int id);

    bool isNoDisponible();
    void setNoDisponible(bool noDisponible);
};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_PROPIETARIO_H
