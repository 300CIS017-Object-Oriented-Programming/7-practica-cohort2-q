#include "tienda.h"

void Tienda::agregarProducto(const Producto& prod) {
    inventario[prod.getCodigo()] = prod;
}

void Tienda::mostrarInventario() const {
    cout << "Inventario de la tienda:\n";
    for (const auto& par : inventario) {
        par.second.mostrarInformacion();
    }
}
