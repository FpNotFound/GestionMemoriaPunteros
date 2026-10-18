#include <iostream>
#include <string>
#include "ListaDeObjetos.h"
using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    Persona() {
        nombre = "";
        edad = 0;
    }

    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }
};

int main() {
    ListaDeObjetos<int> numeros;
    numeros.agregar(5);
    numeros.agregar(10);
    cout << "Extraido: " << numeros.extraer() << endl;
    cout << "Extraido: " << numeros.extraer() << endl;

    ListaDeObjetos<Persona> personas;
    personas.agregar(Persona("Mora", 20));
    personas.agregar(Persona("Juan", 19));

    Persona p = personas.extraer();
    cout << "Extraido: " << p.nombre << " " << p.edad << endl;

    return 0;
}