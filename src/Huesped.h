
#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_HUESPED_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_HUESPED_H

#include <string>
#include <iostream>

using namespace std;

class Huesped {
private:
    string nombreH;
    string generoH;
    string nacimientoH;
    string clinicaH;
    string lugarH;
    float puntajeH;
    int IdH;

public:
    Huesped();

    Huesped(int IdH, float puntajeH, string nombreH, string generoH, string nacimientoH, string clinicaH, string lugarH);

    string getNombreH();
    void setNombreH(string nombreH);

    string getGeneroH();
    void setGeneroH(string generoH);

    string getNacimientoH();
    void setNacimientoH(string nacimientoH);

    string getClinicaH();
    void setClinicaH(string clinicaH);

    string getLugarH();
    void setLugarH(string lugarH);

    float getPuntajeH();
    void setPuntajeH(float puntajeH);

    int getIdH();
    void setIdH(int IdH);

    void numPuntajeH(int num);

    void mostrarHuesped(unordered_map <int, Huesped*> huespedes;);
};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_HUESPED_H
