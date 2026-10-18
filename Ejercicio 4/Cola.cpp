#include "Cola.h"
#include <iostream>
using namespace std;

template <class T>
Cola<T>::Cola() {
    tamano = 2;
    cantidad = 0;
    elementos = new T[tamano];
}

template <class T>
Cola<T>::~Cola() {
    delete[] elementos;
}

template <class T>
void Cola<T>::agregar(T elemento) {
    // si esta llena, creamos un array del doble de tamano
    if (cantidad == tamano) {
        tamano = tamano * 2;
        T* nuevo = new T[tamano];
        for (int i = 0; i < cantidad; i++) {
            nuevo[i] = elementos[i];
        }
        delete[] elementos;
        elementos = nuevo;
    }
    elementos[cantidad] = elemento;
    cantidad++;
}

template <class T>
T Cola<T>::quitar() {
    if (cantidad == 0) {
        cout << "La cola esta vacia" << endl;
        return T();
    }
    T primero = elementos[0];
    // movemos todos los elementos una posicion a la izquierda
    for (int i = 0; i < cantidad - 1; i++) {
        elementos[i] = elementos[i + 1];
    }
    cantidad--;
    return primero;
}