#ifndef LISTADEOBJETOS_H
#define LISTADEOBJETOS_H

template <class T>
class ListaDeObjetos {
private:
    T elementos[10];
    int cantidad;

public:
    ListaDeObjetos();
    void agregar(T elemento);
    T extraer();
};

#include "ListaDeObjetos.cpp"

#endif