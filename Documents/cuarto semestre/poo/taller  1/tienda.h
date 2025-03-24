#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"

class Tienda {
private:
    vector<Producto*> productos;
    vector<Cliente*> clientes;
    vector<Venta*> ventas;
public:
    void agregarProducto(string codigo, string nombre, float precio, int stockInicial);
    void registrarVenta(int idCliente);
    void reabastecerProducto(string codigoProducto, int cantidad);
    Producto* buscarProducto(string codigo);
    Cliente* buscarCliente(int idCliente);
    void listarProductos();
    void mostrarVentas();
    float calcularValorInventario();
    void agregarCliente(int id, const string& nombre);
    bool realizarVenta(const string& codigo, int cantidad);
    };




#endif



