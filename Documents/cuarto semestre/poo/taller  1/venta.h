#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
using namespace std;

class Venta {
private:
    int id;
    Cliente* cliente;
    vector<pair<Producto*, int>> productosVendidos;
public:
    Venta(int _id, Cliente* _cliente);
    void agregarProductoVendido(Producto* producto, int cantidad);
    float calcularTotal();
    void mostrarDetalleVenta();
};

#endif
