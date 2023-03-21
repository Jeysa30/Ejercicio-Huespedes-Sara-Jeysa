#include "Evaluacion.h"

Evaluacion::Evaluacion(string fechaEvaluacion, string comentario, int PersonaDirigida, int personaEvaluacion, int calificar): fechaEvaluacion(fechaEvaluacion), comentario(comentario), PersonaDirigida(PersonaDirigida), personaEvaluacion(personaEvaluacion), calificar(calificar){}

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

int Evaluacion::getPersonaDirigida(){
    return PersonaDirigida;
}

void Evaluacion::setPersonaDirigida(int personaDirigida) {
    PersonaDirigida = personaDirigida;
}

int Evaluacion::getPersonaEvaluacion(){
    return personaEvaluacion;
}

void Evaluacion::setPersonaEvaluacion(int personaEvaluacion) {
    Evaluacion::personaEvaluacion = personaEvaluacion;
}

