#include "cliente.h"

Cliente::Cliente(int id, std::string nombre, std::string direccion) {
    this->id = id;
    this->nombre = nombre;
    this->direccion = direccion;
}

int Cliente::getId() const {
    return id;
}

std::string Cliente::getNombre() const {
    return nombre;
}


