#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <fstream>

using namespace std;

const int TAMANIO_ARRAY = 4;
vector<array<string, TAMANIO_ARRAY>> operaciones;
string alltext;

// Sentencias de control
void calculator();
void funcion_for();
void funcion_if();
void funcion_while();
void funcion_switch();
void funcion_reporte();
void calculator_menu();
void calculator_funcs(int opc);
void calculator_menu2();
void calculator_funcs2(int opc, int n1, int n2);
void lectura_archivo();
void leer_local();
void leer_ruta();

void imprimirOperaciones(const vector<array<string, TAMANIO_ARRAY>> &operaciones);
void reporte_html(const vector<array<string, TAMANIO_ARRAY>> &operaciones);

int main(int argc, char **argv)
{
    // calculator();
    // funcion_for();
    // funcion_if();
    // funcion_while();
    // funcion_switch();
    // funcion_reporte();
    // calculator_menu();
    // calculator_menu2();
    lectura_archivo();
}

void calculator()
{
    cout << "Entrando a una funcion calculadora" << endl;
    int n1, n2;

    cout << "Ingresa n1: " << endl;
    cin >> n1;

    cout << "Ingresa n2 " << endl;
    cin >> n2;

    int suma = n1 + n2;

    cout << "Resultado : " << suma << endl;
}

// Sentencias de control

void funcion_for()
{
    for (int i = 0; i < 11; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Numero en el if : " << i << endl;
        }
        // cout << "Numero : " << i << endl;
    }
}

void funcion_if()
{
    int n1, n2;  // Numeros a operar
    int opc = 0; // Opcion a seleccionar
    int suma, resta, multi, div;
    int resultado = 0;

    cout << "=============== IF ===============" << endl;
    cout << "\tSelecciona una opcion : " << endl;
    cout << "\t1. Suma \n"
            "\t2. Resta \n"
            "\t3. Multiplicación \n"
            "\t4. División"
         << endl;
    // cout << "1. Suma " << endl;
    // cout << "2. Resta " << endl;
    // cout << "3. Multiplicación " << endl;
    // cout << "4. División " << endl;
    cin >> opc;

    if (opc == 1)
    {
        cout << "Seleccionamos opcion suma" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        cout << "Ingresa n2 " << endl;
        cin >> n2;
        suma = n1 + n2;
        resultado = suma;
        cout << "Resultado : " << resultado << endl;
    }
    if (opc == 2)
    {
        cout << "Seleccionamos opcion resta" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        cout << "Ingresa n2 " << endl;
        cin >> n2;
        resta = n1 - n2;
        resultado = resta;
        cout << "Resultado : " << resultado << endl;
    }
    if (opc == 3)
    {
        cout << "Seleccionamos opcion multi" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        cout << "Ingresa n2 " << endl;
        cin >> n2;
        multi = n1 * n2;
        resultado = multi;
        cout << "Resultado : " << resultado << endl;
    }
    if (opc == 4)
    {
        cout << "Seleccionamos opcion div" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        cout << "Ingresa n2 " << endl;
        cin >> n2;

        if (n2 == 0)
        {
            cout << "No se puede dividir entre 0" << endl;
            // return;
        }
        else
        {
            div = n1 / n2;
            resultado = div;
            cout << "Resultado : " << resultado << endl;
        }
    }
}

void funcion_while()
{
    int opc = 0;
    do
    {
        int n1, n2; // Numeros a operar
        int suma, resta, multi, div;
        int resultado = 0;

        cout << "=============== IF ===============" << endl;
        cout << "\tSelecciona una opcion : " << endl;
        cout << "\t1. Suma \n"
                "\t2. Resta \n"
                "\t3. Multiplicación \n"
                "\t4. División\n"
                "\t5. Salir"
             << endl;
        // cout << "1. Suma " << endl;
        // cout << "2. Resta " << endl;
        // cout << "3. Multiplicación " << endl;
        // cout << "4. División " << endl;
        cin >> opc;

        if (opc == 1)
        {
            cout << "Seleccionamos opcion suma" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            suma = n1 + n2;
            resultado = suma;
            cout << "Resultado : " << resultado << endl;
        }
        if (opc == 2)
        {
            cout << "Seleccionamos opcion resta" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            resta = n1 - n2;
            resultado = resta;
            cout << "Resultado : " << resultado << endl;
        }
        if (opc == 3)
        {
            cout << "Seleccionamos opcion multi" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            multi = n1 * n2;
            resultado = multi;
            cout << "Resultado : " << resultado << endl;
        }
        if (opc == 4)
        {
            cout << "Seleccionamos opcion div" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;

            if (n2 == 0)
            {
                cout << "No se puede dividir entre 0" << endl;
                // return;
            }
            else
            {
                div = n1 / n2;
                resultado = div;
                cout << "Resultado : " << resultado << endl;
            }
        }
        if (opc == 5)
        {
            cout << "Saliendo del programa" << endl;
        }
    } while (opc != 5);
}

void funcion_switch()
{

    int opc = 0;
    do
    {
        int n1, n2; // Numeros a operar
        int suma, resta, multi, div, pot, raiz;
        int resultado = 0;

        cout << "=============== IF ===============" << endl;
        cout << "\tSelecciona una opcion : " << endl;
        cout << "\t1. Suma \n"
                "\t2. Resta \n"
                "\t3. Multiplicación \n"
                "\t4. División\n"
                "\t5. Potencia\n"
                "\t6. Raiz\n"
                "\t7. Imprimir\n"
                "\t8. Salir"
             << endl;
        // cout << "1. Suma " << endl;
        // cout << "2. Resta " << endl;
        // cout << "3. Multiplicación " << endl;
        // cout << "4. División " << endl;
        cin >> opc;

        switch (opc)
        {

        case 1:
            cout << "Seleccionamos opcion suma" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            suma = n1 + n2;
            resultado = suma;
            cout << "Resultado : " << resultado << endl;
            break;

        case 2:
            cout << "Seleccionamos opcion resta" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            resta = n1 - n2;
            resultado = resta;
            cout << "Resultado : " << resultado << endl;
            break;

        case 3:

            cout << "Seleccionamos opcion multi" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            multi = n1 * n2;
            resultado = multi;
            cout << "Resultado : " << resultado << endl;
            break;

        case 4:

            cout << "Seleccionamos opcion div" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;

            if (n2 == 0)
            {
                cout << "No se puede dividir entre 0" << endl;
                // return;
                break;
            }
            else
            {
                div = n1 / n2;
                resultado = div;
                cout << "Resultado : " << resultado << endl;
                break;
            }

        case 5:
            cout << "Seleccionamos opcion potencia" << endl;
            cout << "Ingrese el n1" << endl;
            cin >> n1;
            cout << "Ingrese la potencia a elevar" << endl;
            cin >> n2;

            pot = pow(n1, n2);

            cout << "El resultado es: " << pot << endl;
            break;

        case 6:
            cout << "Seleccionamos opcion raiz" << endl;
            cout << "Ingrese el n1" << endl;
            cin >> n1;

            raiz = sqrt(n1);

            cout << "El resultado es: " << raiz << endl;
            break;

        case 7:
            cout << "Reporte " << endl;

        case 8:
            cout << "Saliendo del programa" << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (opc != 8);
}

void funcion_reporte()
{
    vector<array<string, TAMANIO_ARRAY>> operaciones;

    int opc = 0;
    do
    {

        int n1, n2; // Numeros a operar
        int suma, resta, multi, div, pot, raiz;
        int resultado = 0;

        cout << "=============== IF ===============" << endl;
        cout << "\tSelecciona una opcion : " << endl;
        cout << "\t1. Suma \n"
                "\t2. Resta \n"
                "\t3. Multiplicación \n"
                "\t4. División\n"
                "\t5. Potencia\n"
                "\t6. Raiz\n"
                "\t7. Imprimir\n"
                "\t8. Salir\n"
             << endl;
        cout << "--> ";
        // cout << "1. Suma " << endl;
        // cout << "2. Resta " << endl;
        // cout << "3. Multiplicación " << endl;
        // cout << "4. División " << endl;
        cin >> opc;
        array<string, TAMANIO_ARRAY> nuevaOperacion;

        switch (opc)
        {

        case 1:
            nuevaOperacion[0] = "suma";
            cout << "Seleccionamos opcion suma" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            nuevaOperacion[1] = to_string(n1);
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            nuevaOperacion[2] = to_string(n2);
            suma = n1 + n2;
            resultado = suma;
            cout << "Resultado : " << resultado << endl;

            nuevaOperacion[3] = to_string(resultado);
            operaciones.push_back(nuevaOperacion);
            break;

        case 2:
            nuevaOperacion[0] = "resta";
            cout << "Seleccionamos opcion resta" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            resta = n1 - n2;
            resultado = resta;
            cout << "Resultado : " << resultado << endl;
            nuevaOperacion[1] = to_string(n1);
            nuevaOperacion[2] = to_string(n2);
            nuevaOperacion[3] = to_string(resultado);
            operaciones.push_back(nuevaOperacion);
            break;

        case 3:
            nuevaOperacion[0] = "multi";
            cout << "Seleccionamos opcion multi" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            multi = n1 * n2;
            resultado = multi;
            cout << "Resultado : " << resultado << endl;
            nuevaOperacion[1] = to_string(n1);
            nuevaOperacion[2] = to_string(n2);
            nuevaOperacion[3] = to_string(resultado);
            operaciones.push_back(nuevaOperacion);
            break;

        case 4:
            nuevaOperacion[0] = "div";
            cout << "Seleccionamos opcion div" << endl;
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;

            if (n2 == 0)
            {
                cout << "No se puede dividir entre 0" << endl;
                // return;
                break;
            }
            else
            {
                div = n1 / n2;
                resultado = div;
                cout << "Resultado : " << resultado << endl;
                nuevaOperacion[1] = to_string(n1);
                nuevaOperacion[2] = to_string(n2);
                nuevaOperacion[3] = to_string(resultado);
                operaciones.push_back(nuevaOperacion);
                break;
            }

        case 5:
            cout << "Seleccionamos opcion potencia" << endl;
            cout << "Ingrese el n1" << endl;
            cin >> n1;
            cout << "Ingrese la potencia a elevar" << endl;
            cin >> n2;

            pot = pow(n1, n2);

            cout << "El resultado es: " << pot << endl;
            break;

        case 6:
            cout << "Seleccionamos opcion raiz" << endl;
            cout << "Ingrese el n1" << endl;
            cin >> n1;

            raiz = sqrt(n1);

            cout << "El resultado es: " << raiz << endl;
            break;

        case 7:
            // reporte_html(operaciones);
            imprimirOperaciones(operaciones);
            break;

        case 8:
            cout << "Saliendo del programa" << endl;
            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    } while (opc != 8);
}

void calculator_menu()
{

    int opc = 0;
    do
    {

        cout << "=============== IF ===============" << endl;
        cout << "\tSelecciona una opcion : " << endl;
        cout << "\t1. Suma \n"
                "\t2. Resta \n"
                "\t3. Multiplicación \n"
                "\t4. División\n"
                "\t5. Potencia\n"
                "\t6. Raiz\n"
                "\t7. Imprimir\n"
                "\t8. Salir\n"
             << endl;
        cout << "--> ";
        // cout << "1. Suma " << endl;
        // cout << "2. Resta " << endl;
        // cout << "3. Multiplicación " << endl;
        // cout << "4. División " << endl;
        cin >> opc;

        calculator_funcs(opc);

    } while (opc != 8);
}

// En estos se debe declarar de forma global el vector
void calculator_funcs(int opc)
{

    // vector<array<string, TAMANIO_ARRAY>> operaciones;

    int n1, n2; // Numeros a operar
    int suma, resta, multi, div, pot, raiz;
    int resultado = 0;

    array<string, TAMANIO_ARRAY> nuevaOperacion;

    switch (opc)
    {

    case 1:
        nuevaOperacion[0] = "suma";
        cout << "Seleccionamos opcion suma" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        nuevaOperacion[1] = to_string(n1);
        cout << "Ingresa n2 " << endl;
        cin >> n2;
        nuevaOperacion[2] = to_string(n2);
        suma = n1 + n2;
        resultado = suma;
        cout << "Resultado : " << resultado << endl;

        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 2:
        nuevaOperacion[0] = "resta";
        cout << "Seleccionamos opcion resta" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        cout << "Ingresa n2 " << endl;
        cin >> n2;
        resta = n1 - n2;
        resultado = resta;
        cout << "Resultado : " << resultado << endl;
        nuevaOperacion[1] = to_string(n1);
        nuevaOperacion[2] = to_string(n2);
        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 3:
        nuevaOperacion[0] = "multi";
        cout << "Seleccionamos opcion multi" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        cout << "Ingresa n2 " << endl;
        cin >> n2;
        multi = n1 * n2;
        resultado = multi;
        cout << "Resultado : " << resultado << endl;
        nuevaOperacion[1] = to_string(n1);
        nuevaOperacion[2] = to_string(n2);
        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 4:
        nuevaOperacion[0] = "div";
        cout << "Seleccionamos opcion div" << endl;
        cout << "Ingresa n1: " << endl;
        cin >> n1;
        cout << "Ingresa n2 " << endl;
        cin >> n2;

        if (n2 == 0)
        {
            cout << "No se puede dividir entre 0" << endl;
            // return;
            break;
        }
        else
        {
            div = n1 / n2;
            resultado = div;
            cout << "Resultado : " << resultado << endl;
            nuevaOperacion[1] = to_string(n1);
            nuevaOperacion[2] = to_string(n2);
            nuevaOperacion[3] = to_string(resultado);
            operaciones.push_back(nuevaOperacion);
            break;
        }

    case 5:
        cout << "Seleccionamos opcion potencia" << endl;
        cout << "Ingrese el n1" << endl;
        cin >> n1;
        cout << "Ingrese la potencia a elevar" << endl;
        cin >> n2;

        pot = pow(n1, n2);

        cout << "El resultado es: " << pot << endl;
        break;

    case 6:
        cout << "Seleccionamos opcion raiz" << endl;
        cout << "Ingrese el n1" << endl;
        cin >> n1;

        raiz = sqrt(n1);

        cout << "El resultado es: " << raiz << endl;
        break;

    case 7:
        imprimirOperaciones(operaciones);
        break;

    case 8:
        cout << "Saliendo del programa" << endl;
        break;

    default:
        cout << "Opcion no valida" << endl;
        break;
    }
}

void calculator_menu2()
{
    int n1, n2; // Numeros a operar
    int opc = 0;
    do
    {

        cout << "=============== IF ===============" << endl;
        cout << "\tSelecciona una opcion : " << endl;
        cout << "\t1. Suma \n"
                "\t2. Resta \n"
                "\t3. Multiplicación \n"
                "\t4. División\n"
                "\t5. Potencia\n"
                "\t6. Raiz\n"
                "\t7. Reporte\n"
                "\t8. Salir\n"
             << endl;
        cout << "--> ";
        // cout << "1. Suma " << endl;
        // cout << "2. Resta " << endl;
        // cout << "3. Multiplicación " << endl;
        // cout << "4. División " << endl;
        cin >> opc;

        if (opc == 5)
        {
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa la potencia a elever : " << endl;
            cin >> n2;
            calculator_funcs2(opc, n1, n2);
        }
        else if (opc == 6)
        {
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            calculator_funcs2(opc, n1, n2);
        }
        else if (opc == 7)
        {
            calculator_funcs2(opc, n1, n2);
        }
        else
        {
            cout << "Ingresa n1: " << endl;
            cin >> n1;
            cout << "Ingresa n2 " << endl;
            cin >> n2;
            calculator_funcs2(opc, n1, n2);
        }

    } while (opc != 8);
}

// En estos se debe declarar de forma global el vector
void calculator_funcs2(int opc, int n1, int n2)
{

    // vector<array<string, TAMANIO_ARRAY>> operaciones;

    array<string, TAMANIO_ARRAY> nuevaOperacion;

    int suma, resta, multi, div, pot, raiz;
    int resultado = 0;

    switch (opc)
    {

    case 1:
        nuevaOperacion[0] = "suma";
        nuevaOperacion[1] = to_string(n1);
        nuevaOperacion[2] = to_string(n2);
        suma = n1 + n2;
        resultado = suma;
        cout << "Resultado : " << resultado << endl;
        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 2:
        nuevaOperacion[0] = "resta";
        resta = n1 - n2;
        resultado = resta;
        cout << "Resultado : " << resultado << endl;
        nuevaOperacion[1] = to_string(n1);
        nuevaOperacion[2] = to_string(n2);
        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 3:
        nuevaOperacion[0] = "multi";
        cout << "Seleccionamos opcion multi" << endl;
        multi = n1 * n2;
        resultado = multi;
        cout << "Resultado : " << resultado << endl;
        nuevaOperacion[1] = to_string(n1);
        nuevaOperacion[2] = to_string(n2);
        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 4:
        nuevaOperacion[0] = "div";

        if (n2 == 0)
        {
            cout << "No se puede dividir entre 0" << endl;
            break;
        }
        else
        {
            div = n1 / n2;
            resultado = div;
            cout << "Resultado : " << resultado << endl;
            nuevaOperacion[1] = to_string(n1);
            nuevaOperacion[2] = to_string(n2);
            nuevaOperacion[3] = to_string(resultado);
            operaciones.push_back(nuevaOperacion);
            break;
        }

    case 5:
        nuevaOperacion[0] = "pot";
        cout << "Seleccionamos opcion potencia" << endl;
        // cout << "Ingrese el n1" << endl;
        // cin >> n1;
        // cout << "Ingrese la potencia a elevar" << endl;
        // cin >> n2;

        pot = pow(n1, n2);
        resultado = pot;

        cout << "El resultado es: " << pot << endl;
        nuevaOperacion[1] = to_string(n1);
        nuevaOperacion[2] = to_string(n2);
        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 6:
        nuevaOperacion[0] = "raiz";
        cout << "Seleccionamos opcion raiz" << endl;
        // cout << "Ingrese el n1" << endl;
        // cin >> n1;

        raiz = sqrt(n1);

        resultado = raiz;

        cout << "El resultado es: " << raiz << endl;
        nuevaOperacion[1] = to_string(n1);
        nuevaOperacion[2] = " - ";
        nuevaOperacion[3] = to_string(resultado);
        operaciones.push_back(nuevaOperacion);
        break;

    case 7:
        reporte_html(operaciones);
        break;

    case 8:
        cout << "Saliendo del programa" << endl;
        break;

    default:
        cout << "Opcion no valida" << endl;
        break;
    }
}

void imprimirOperaciones(const vector<array<string, TAMANIO_ARRAY>> &operaciones)
{
    cout << "Operaciones almacenadas:" << endl;
    for (const array<string, TAMANIO_ARRAY> &op : operaciones)
    {
        cout << "Operación: " << op[0] << ", n1: " << op[1] << ", n2: " << op[2] << ", resultado: " << op[3] << endl;
    }
}

void reporte_html(const vector<array<string, TAMANIO_ARRAY>> &operaciones)
{
    string dot = "";

    dot = dot + "<!DOCTYPE html>\n";
    dot = dot + "<html lang=\" en \">\n";
    dot = dot + "<head>\n";
    dot = dot + "<meta charset=\"UTF-8\">";
    dot = dot + "<meta name=\"viewport\" content=width=device-width, initial-scale=1.0\">";
    dot = dot + "<title>Document</title>\n";
    dot = dot + "</head>\n";
    dot = dot + "<body>\n";
    dot = dot + "<h1>Reporte de Operaciones</h1>";
    dot = dot + "<table border=\"1\">";
    dot = dot + "<tr>\n";
    dot = dot + "<th>Operacion</th>\n";
    dot = dot + "<th>Numero 1 </th>\n";
    dot = dot + "<th>Numero 2</th>\n";
    dot = dot + "<th>Resultado</th>\n";
    dot = dot + "</tr>\n";

    for (const array<string, TAMANIO_ARRAY> &op : operaciones)
    {
        dot = dot + "<tr>\n";
        dot = dot + "<th>" + op[0] + "</th>\n";
        dot = dot + "<th>" + op[1] + "</th>\n";
        dot = dot + "<th>" + op[2] + "</th>\n";
        dot = dot + "<th>" + op[3] + "</th>\n";
        dot = dot + "</tr>\n";
    }

    dot = dot + "</table>\n";
    dot = dot + "</body>\n";
    dot = dot + "</html>\n";

    ofstream file;
    file.open("Salida.html");
    file << dot;
    file.close();
}

void lectura_archivo()
{

    int opt = 0;
    do
    {
        cout << "--------Menu--------" << endl;
        cout << "1. Leer Archivo Local" << endl;
        cout << "2. Leer Archivo mediante Path" << endl;
        cout << "3. Ver contenido" << endl;
        cout << "4. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> opt;

        switch (opt)
        {
        case 1:
            // Call the function
            leer_local();
            break;

        case 2:
            // Call the function
            leer_ruta();
            break;

        case 3:
            // Call the var that contain all the text
            if (alltext == "")
            {
                cout << "Se necesita leer una archivo primero" << endl;
            }
            else
            {
                cout << alltext << endl;
            }
            break;

        case 4:
            cout << "\nFinalizando el programa\n"
                 << endl;
            break;

        default:
            cout << "\nNecesitas seleccionar una opción correcta\n"
                 << endl;
            break;
        }
    } while (opt != 4);
}

//==========================Using functions==========================

void leer_local()
{
    ifstream archivo;
    string texto_leer;
    archivo.open("texto.txt", ios::in);
    if (archivo.fail())
    {
        cout << "\nNo se puede abrir el archivo\n"
             << endl;
    }

    while (!archivo.eof())
    {
        getline(archivo, texto_leer);
        alltext = texto_leer;
        cout << "Archivo leido correctamente" << endl;
    }
    archivo.close();
}

// Function that get the path and open the file
void leer_ruta()
{
    ifstream archivo;
    string path;
    string texto_leer;
    cout << "Ingresa la ruta del archivo " << endl;
    cin.ignore();
    getline(cin, path);
    archivo.open(path.c_str(), ios::in);
    if (archivo.fail())
    {
        cout << "\nNo se puede abrir el archivo\n"
             << endl;
    }

    while (!archivo.eof())
    {
        getline(archivo, texto_leer);
        alltext = texto_leer;
        cout << "Archivo leido correctamente" << endl;
    }
    archivo.close();
}