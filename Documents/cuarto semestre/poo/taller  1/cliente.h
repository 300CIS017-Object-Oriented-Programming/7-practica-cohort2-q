#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente {
private:
    int id;
    std::string nombre;
    std::string direccion;

public:
    Cliente(int id, string nombre, string direccion);
    int getId() const;
    std::string getNombre() const;

};
#endif
