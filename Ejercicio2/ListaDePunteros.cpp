#include "ListaDePunteros.h"
#include <iostream>
using namespace std;

template <class T>
ListaDePunteros<T>::ListaDePunteros() {
    cantidad = 0;
}

template <class T>
void ListaDePunteros<T>::agregar(T* elemento) {
    if (cantidad < 10) {
        elementos[cantidad] = elemento;
        cantidad++;
    } else {
        cout << "La lista esta llena" << endl;
    }
}

template <class T>
T* ListaDePunteros<T>::extraer() {
    if (cantidad == 0) {
        cout << "La lista esta vacia" << endl;
        return nullptr;
    }
    cantidad--;
    return elementos[cantidad];
}