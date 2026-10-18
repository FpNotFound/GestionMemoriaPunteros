#include "ListaDeObjetos.h"
#include <iostream>
using namespace std;

template <class T>
ListaDeObjetos<T>::ListaDeObjetos() {
    cantidad = 0;
}

template <class T>
void ListaDeObjetos<T>::agregar(T elemento) {
    if (cantidad < 10) {
        elementos[cantidad] = elemento;
        cantidad++;
    } else {
        cout << "La lista esta llena" << endl;
    }
}

template <class T>
T ListaDeObjetos<T>::extraer() {
    if (cantidad == 0) {
        cout << "La lista esta vacia" << endl;
        return T();
    }
    cantidad--;
    return elementos[cantidad];
}