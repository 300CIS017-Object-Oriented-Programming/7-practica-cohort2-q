#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto {
private:
    string codigo;
    string nombre;
    float precio;
    int stock;

public:
    Producto(string _codigo, string _nombre, float _precio, int _stock);

    string getCodigo() const;
    string getNombre() const;
    float getPrecio() const;
    int getStock() const;

    bool descontarStock(int cantidad);
    void agregarStock(int cantidad);
    void mostrarInfo() const;
    void reducirStock(int cantidad) {
        stock -= cantidad;
    }

};

#endif