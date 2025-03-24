#include <iostream>
#include "tienda.h"

using namespace std;

void mostrarMenu() {
    cout << "\n--- Sistema de Gestión de Inventario ---\n";
    cout << "1. Agregar producto\n";
    cout << "2. Buscar producto\n";
    cout << "3. Listar productos\n";
    cout << "4. Agregar cliente\n";
    cout << "5. Buscar cliente\n";
    cout << "6. Realizar venta\n";
    cout << "7. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    Tienda tienda;
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: {
                string codigo, nombre;
                float precio;
                int stock;

                cout << "Ingrese codigo del producto: ";
                getline(cin, codigo);
                cout << "Ingrese nombre del producto: ";
                getline(cin, nombre);
                cout << "Ingrese precio del producto: ";
                cin >> precio;
                cout << "Ingrese stock inicial: ";
                cin >> stock;

                tienda.agregarProducto(codigo, nombre, precio, stock);
                cout << "Producto agregado con exito.\n";
                break;
            }
            case 2: {
                string codigo;
                cout << "Ingrese codigo del producto a buscar: ";
                getline(cin, codigo);
                Producto* producto = tienda.buscarProducto(codigo);

                if (producto)
                    cout << "Producto encontrado: " << producto->getNombre() << "\n";
                else
                    cout << "Producto no encontrado.\n";
                break;
            }
            case 3:
                tienda.listarProductos();
                break;
            case 4: {
                int id;
                string nombre;

                cout << "Ingrese ID del cliente: ";
                cin >> id;
                cin.ignore();
                cout << "Ingrese nombre del cliente: ";
                getline(cin, nombre);

                tienda.agregarCliente(id, nombre);
                cout << "Cliente agregado con exito.\n";
                break;
            }

            case 5: {
                int id;
                cout << "Ingrese ID del cliente a buscar: ";
                cin >> id;

                Cliente* cliente = tienda.buscarCliente(id);

                if (cliente)
                    cout << "Cliente encontrado: " << cliente->getNombre() << "\n";
                else
                    cout << "Cliente no encontrado.\n";
                break;
            }

            case 6: {
                string codigo;
                int cantidad;

                cout << "Ingrese codigo del producto a vender: ";
                cin.ignore();
                getline(cin, codigo);
                cout << "Ingrese cantidad a vender: ";
                cin >> cantidad;

                if (tienda.realizarVenta(codigo, cantidad))
                    cout << "Venta realizada con exito.\n";
                else
                    cout << "Venta fallida. Verifique el stock disponible.\n";
                break;
            }
            case 7:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while (opcion != 7);

    return 0;
}



