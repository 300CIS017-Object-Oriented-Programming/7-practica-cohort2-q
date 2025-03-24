#include "Tienda.h"
#include "producto.h"

void Tienda::agregarProducto(string codigo, string nombre, float precio, int stockInicial) {
    productos.push_back(new Producto(codigo, nombre, precio, stockInicial));
}
void Tienda::agregarCliente(int id, const string& nombre) {
    clientes.push_back(new Cliente(id, nombre, "desconocida"));

}
bool Tienda::realizarVenta(const string& codigo, int cantidad) {
    for (Producto* p : productos) {  // Suponiendo que productos es un vector<Producto*>
        if (p->getCodigo() == codigo) {
            if (p->getStock() >= cantidad) {
                p->reducirStock(cantidad);  // Método que reduce el stock
                return true;
            } else {
                return false;  // No hay suficiente stock
            }
        }
    }
    return false;  // Producto no encontrado
}


Producto* Tienda::buscarProducto(string codigo) {
    for (Producto* p : productos) {
        if (p->getCodigo() == codigo) return p;
    }
    return nullptr;
}

Cliente* Tienda::buscarCliente(int idCliente) {
    for (Cliente* c : clientes) {
        if (c->getId() == idCliente) return c;
    }
    return nullptr;
}

void Tienda::listarProductos() {
    for (Producto* p : productos) {
        p->mostrarInfo();
    }
}

float Tienda::calcularValorInventario() {
    float total = 0;
    for (Producto* p : productos) {
        total += p->getPrecio() * p->getStock();
    }
    return total;
}
