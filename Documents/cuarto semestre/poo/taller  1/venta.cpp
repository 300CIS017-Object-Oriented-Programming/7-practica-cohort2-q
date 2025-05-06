#include "Venta.h"

Venta::Venta(int _id, Cliente* _cliente) {
    id = _id;
    cliente = _cliente;
}

void Venta::agregarProductoVendido(Producto* producto, int cantidad) {
    productosVendidos.push_back(make_pair(producto, cantidad));
}

float Venta::calcularTotal() {
    float total = 0;
    for (auto& item : productosVendidos) {
        total += item.first->descontarStock(item.second) ? item.first->getPrecio() * item.second : 0;
    }
    return total;
}

void Venta::mostrarDetalleVenta() {
    cout << "Venta ID: " << id << "\nCliente: " << cliente->getNombre() << endl;
    cout << "Productos vendidos:" << endl;
    for (auto& item : productosVendidos) {
        cout << "- " << item.first->getNombre() << " x" << item.second << " ($" << item.first->getPrecio() << ")" << endl;
    }
    cout << "Total: $" << calcularTotal() << endl;
}
