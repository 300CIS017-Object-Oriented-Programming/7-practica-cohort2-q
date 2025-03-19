#include "producto.h"
#include "tienda.h"

int main() {
    Producto prod1("P001", "Shampo", 10.5, 50);
    Producto prod2("P002", "Cepillo", 3.0, 30);

    Tienda tienda;
    tienda.agregarProducto(prod1);
    tienda.agregarProducto(prod2);

    tienda.mostrarInventario();

    return 0;
}

