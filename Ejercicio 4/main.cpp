#include <iostream>
#include "Cola.h"
using namespace std;

int main() {
    Cola<int> cola;

    cola.agregar(10);
    cola.agregar(20);
    cola.agregar(30);   // aqui la cola crece sola
    cola.agregar(40);

    cout << cola.quitar() << endl;
    cout << cola.quitar() << endl;
    cout << cola.quitar() << endl;
    cout << cola.quitar() << endl;

    return 0;
}