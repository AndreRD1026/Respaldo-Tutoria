#ifndef LISTAOPERACIONES_H
#define LISTAOPERACIONES_H

#include <iostream>
#include "operaciones.h"
using namespace std;

class ListaOperaciones {
public:
    Operaciones *primero;
    Operaciones *ultimo;
    int size;

    ListaOperaciones() {
        primero = NULL;
        ultimo = NULL;
        size = 0;
    }
    
    void insertarFinal(Operaciones* nuevo);
    void imprimir();
    void crearHTML();

private:
    
    };

#endif /* LISTAOPERACIONES_H */
