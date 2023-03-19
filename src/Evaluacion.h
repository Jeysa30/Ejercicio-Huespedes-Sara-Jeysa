#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_EVALUACION_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_EVALUACION_H

#include <string>
#include <iostream>

using namespace std;

class Evaluacion {
private:
    string fechaEvaluacion;
    string comentario;
    string PersonaDirigida;
    string personaEvaluacion;
    int calificar;

public:

    Evaluacion() = default;


    string getPersonaEvaluacion();
    void setPersonaEvaluacion(string personaEvaluacion);

    string getPersonaDirigida();
    void setPersonaDirigida(string personaDirigida);

    int getCalificar();
    void setCalificar(int calificar);

    string getComentario();
    void setComentario(string comentario);

    string getFechaEvaluacion();
    void setFechaEvaluacion(string fechaEvaluacion);

};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_EVALUACION_H
