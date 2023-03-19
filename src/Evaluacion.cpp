#include "Evaluacion.h"

string Evaluacion::getFechaEvaluacion(){
    return fechaEvaluacion;
}

void Evaluacion::setFechaEvaluacion(string fechaEvaluacion){
    Evaluacion::fechaEvaluacion = fechaEvaluacion;
}

string Evaluacion::getComentario(){
    return comentario;
}

void Evaluacion::setComentario(string comentario) {
    Evaluacion::comentario = comentario;
}

int Evaluacion::getCalificar(){
    return calificar;
}

void Evaluacion::setCalificar(int calificar) {
    Evaluacion::calificar = calificar;
}

string Evaluacion::getPersonaDirigida(){
    return PersonaDirigida;
}

void Evaluacion::setPersonaDirigida(string personaDirigida) {
    PersonaDirigida = personaDirigida;
}

 string Evaluacion::getPersonaEvaluacion(){
    return personaEvaluacion;
}

void Evaluacion::setPersonaEvaluacion(string personaEvaluacion) {
    Evaluacion::personaEvaluacion = personaEvaluacion;
}
