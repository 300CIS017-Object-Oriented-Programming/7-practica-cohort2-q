#include <iostream>
#include <vector>
#include "empleado.h"
using namespace std;

int main() {
    vector<Empleado*> empleados;


    cout << "Creando empleados para la nomina..." << endl;
    empleados.push_back(new DesarrolladorJunior("Ana Junior", 2000.0));
    empleados.push_back(new DesarrolladorJunior("Luis Junior", 2100.0));
    empleados.push_back(new DesarrolladorSenior("Sofia Senior", 3500.0));
    empleados.push_back(new DesarrolladorSenior("Mateo Senior", 3800.0));
    empleados.push_back(new LiderTecnico("Isabela Lider", 5000.0));
    empleados.push_back(new LiderTecnico("Gabriel Lider", 5200.0));
    empleados.push_back(new Tester("Valentina Tester", 2500.0));
    empleados.push_back(new Tester("Nicolas Tester", 2600.0));
    cout << "Empleados creados." << endl;

    cout << "\n--- Nomina de Empleados ---" << endl;
    for (const Empleado* empleado : empleados) {
        cout << "Nombre: " << empleado->getNombre()
             << ", Tipo: " << empleado->getTipoEmpleado()
             << ", Salario: $" << empleado->calcularSalario() << endl;
    }
    cout << "--------------------------" << endl;

    double totalNomina = 0.0;
    for (const Empleado* empleado : empleados) {
        totalNomina += empleado->calcularSalario();
    }

    cout << "\nValor total a pagar en nomina: $" << totalNomina << endl;


    cout << "\nLiberando memoria de los empleados..." << endl;
    for (Empleado* empleado : empleados) {
        delete empleado;
    }
    empleados.clear();
    cout << "Memoria liberada." << endl;

    cout << "\nFin del programa." << endl;
    return 0;
}