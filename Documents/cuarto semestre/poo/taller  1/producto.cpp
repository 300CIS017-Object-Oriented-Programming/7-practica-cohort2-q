#include "producto.h"

Producto::Producto(string _codigo, string _nombre, float _precio, int _stock) {
    codigo = _codigo;
    nombre = _nombre;
    precio = _precio;
    stock = _stock;
}

string Producto::getCodigo() const { return codigo; }
string Producto::getNombre() const { return nombre; }
float Producto::getPrecio() const { return precio; }
int Producto::getStock() const { return stock; }

bool Producto::descontarStock(int cantidad) {
    if (cantidad > stock) {
        cout << "No hay suficiente stock disponible.\n";
        return false;
    }
    stock -= cantidad;
    return true;
}

void Producto::agregarStock(int cantidad) {
    stock += cantidad;
}

void Producto::mostrarInfo() const {
    cout << "Codigo: " << codigo << "\n";
    cout << "Nombre: " << nombre << "\n";
    cout << "Precio: $" << precio << "\n";
    cout << "Stock: " << stock << "\n";
}



