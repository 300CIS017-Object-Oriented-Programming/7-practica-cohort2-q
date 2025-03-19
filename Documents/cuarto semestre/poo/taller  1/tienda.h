#ifndef TIENDA_H
#define TIENDA_H

#include "Producto.h"
#include <map>

using namespace std;

class Tienda {
private:
    map<string, Producto> inventario; // Diccionario que almacena los productos

public:
    void agregarProducto(const Producto& prod);
    void mostrarInventario() const;
};

#endif


