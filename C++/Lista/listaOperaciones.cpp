#include "listaOperaciones.h"
#include <iostream>
#include <fstream>

using namespace std;

void ListaOperaciones::insertarFinal(Operaciones* nuevo){
    if (primero == NULL) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        ultimo->siguiente = nuevo;
        nuevo->anterior = ultimo;
        ultimo = nuevo;
    }
    size++;
}

void ListaOperaciones::imprimir() {
    if (primero == NULL) {
        cout << "La lista esta vacia" << endl;
    } else {
        Operaciones *aux = primero;
        cout << "--------------------------" << endl;
        cout << "Lista de Operaciones" << endl;
        cout << "--------------------------" << endl;
        while (aux != NULL) {
            cout << "Tipo: " << aux->tipo << endl;
            cout << "Numero 1: " << aux->numero1 << endl;
            cout << "Numero 2: " << aux->numero2 << endl;
            cout << "Resultado: " << aux->resultado << endl;
            cout << "--------------------------" << endl;
            aux = aux->siguiente;
        }
    }
}

void ListaOperaciones::crearHTML() {
    if (primero == NULL) {
        cout << "La lista esta vacia" << endl;
    } else {
        Operaciones *aux = primero;
        string html = "<!DOCTYPE html>\n";
        html += "<html>\n";
        html += "<head>\n";
        html += "<meta charset=\"UTF-8\">\n";
        html += "<title>Lista de Operaciones</title>\n";
        html += "</head>\n";
        html += "<body>\n";
        html += "<h1>Lista de Operaciones</h1>\n";
        html += "<table border=\"1\">\n";
        html += "<tr>\n";
        html += "<th>Tipo</th>\n";
        html += "<th>Numero 1</th>\n";
        html += "<th>Numero 2</th>\n";
        html += "<th>Resultado</th>\n";
        html += "</tr>\n";
        while (aux != NULL) {
            html += "<tr>\n";
            html += "<td>" + aux->tipo + "</td>\n";
            html += "<td>" + to_string(aux->numero1) + "</td>\n";
            html += "<td>" + to_string(aux->numero2) + "</td>\n";
            html += "<td>" + to_string(aux->resultado) + "</td>\n";
            html += "</tr>\n";
            aux = aux->siguiente;
        }
        html += "</table>\n";
        html += "</body>\n";
        html += "</html>\n";
        

        ofstream archivo;
        archivo.open("Salida.html");
        archivo << html;
        archivo.close();
    }
}