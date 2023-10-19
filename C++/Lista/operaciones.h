#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
using namespace std;

class Operaciones {
public:
    std::string tipo;
    int numero1;
    int numero2;
    int resultado;
    Operaciones *siguiente;
    Operaciones *anterior;

    Operaciones() {
        tipo = "";
        numero1 = 0;
        numero2 = 0;
        resultado = 0;
        siguiente = NULL;
        anterior = NULL;
    }

private:

};

#endif /* OPERACIONES_H */
