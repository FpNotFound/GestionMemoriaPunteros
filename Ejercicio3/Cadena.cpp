#include "Cadena.h"
#include <iostream>
#include <cstring>
using namespace std;

Cadena::Cadena(const char* cadena) {
    texto = new char[strlen(cadena) + 1];
    strcpy(texto, cadena);
}

Cadena::~Cadena() {
    delete[] texto;
    cout << "Memoria liberada" << endl;
}

void Cadena::mostrar() {
    cout << texto << endl;
}