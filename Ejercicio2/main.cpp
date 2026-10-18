#include <iostream>
#include <string>
#include "ListaDePunteros.h"
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }
};

int main() {
    ListaDePunteros<Persona> lista;

    lista.agregar(new Persona("Mora", 20));
    lista.agregar(new Persona("Juan", 22));

    Persona* p = lista.extraer();
    cout << "Extraido: " << p->nombre << " " << p->edad << endl;
    delete p;

    p = lista.extraer();
    cout << "Extraido: " << p->nombre << " " << p->edad << endl;
    delete p;

    return 0;
}