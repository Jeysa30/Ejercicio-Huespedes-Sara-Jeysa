
#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_HOGAR_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_HOGAR_H

#include <string>
#include <iostream>

using namespace std;

class Hogar {
private:
    string direccion;
    string descripcion;
    bool bebes;
    int camas;

public:
    Hogar() = default;

    string getDireccion();
    void setDireccion(string direccion);

    string getDescripcion();
    void setDescripcion(string descripcion);

    bool isBebes();
    void setBebes(bool bebes);

    int getCamas();
    void setCamas(int camas);
};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_HOGAR_H
