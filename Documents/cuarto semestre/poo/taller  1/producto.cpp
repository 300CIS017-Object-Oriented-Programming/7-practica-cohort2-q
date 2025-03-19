#include "producto.h"

Producto::Producto() : codigo(""), nombre(""), precio(0.0), cantidad(0) {}

Producto::Producto(string cod, string nom, double pre, int cant)
    : codigo(cod), nombre(nom), precio(pre), cantidad(cant) {}

void Producto::actualizarCantidad(int nuevaCantidad) {
    cantidad = nuevaCantidad;
}

void Producto::mostrarInformacion() const {
    cout << "Codigo: " << codigo
         << ", Nombre: " << nombre
         << ", Precio: $" << precio
         << ", Cantidad: " << cantidad << endl;
}

string Producto::getCodigo() const {
    return codigo;
}

