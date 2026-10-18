#ifndef CADENA_H
#define CADENA_H

class Cadena {
private:
    char* texto;

public:
    Cadena(const char* cadena);
    ~Cadena();
    void mostrar();
};

#endif