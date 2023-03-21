#ifndef EJERCICIO_HUESPEDES_SARA_JEYSA_EVALUACION_H
#define EJERCICIO_HUESPEDES_SARA_JEYSA_EVALUACION_H

#include <string>
#include <iostream>

using namespace std;

class Evaluacion {
private:
    string fechaEvaluacion;
    string comentario;
    int PersonaDirigida;
    int personaEvaluacion;
    int calificar;

public:

    Evaluacion() = default;
    Evaluacion(string fechaEvaluacion, string comentario, int PersonaDirigida, int personaEvaluacion, int calificar);


    int getPersonaEvaluacion();
    void setPersonaEvaluacion(int personaEvaluacion);

    int getPersonaDirigida();
    void setPersonaDirigida(int personaDirigida);

    int getCalificar();
    void setCalificar(int calificar);

    string getComentario();
    void setComentario(string comentario);

    string getFechaEvaluacion();
    void setFechaEvaluacion(string fechaEvaluacion);

};


#endif //EJERCICIO_HUESPEDES_SARA_JEYSA_EVALUACION_H
