#ifndef LISTADEPUNTEROS_H
#define LISTADEPUNTEROS_H

template <class T>
class ListaDePunteros {
private:
    T* elementos[10];
    int cantidad;

public:
    ListaDePunteros();
    void agregar(T* elemento);
    T* extraer();
};

#include "ListaDePunteros.cpp"

#endif