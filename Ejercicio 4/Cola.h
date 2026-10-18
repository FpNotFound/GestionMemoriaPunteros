#ifndef COLA_H
#define COLA_H

template <class T>
class Cola {
private:
    T* elementos;
    int tamano;
    int cantidad;

public:
    Cola();
    ~Cola();
    void agregar(T elemento);
    T quitar();
};

#include "Cola.cpp"

#endif