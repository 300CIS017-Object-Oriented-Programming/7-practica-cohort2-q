#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

using namespace std;

class Producto {
private:
    string codigo;
    string nombre;
    double precio;
    int cantidad;

public:
    Producto();
    Producto(string cod, string nom, double pre, int cant);

    void actualizarCantidad(int nuevaCantidad);
    void mostrarInformacion() const;

    string getCodigo() const;
};

#endif