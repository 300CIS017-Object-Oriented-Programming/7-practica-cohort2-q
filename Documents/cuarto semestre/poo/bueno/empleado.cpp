#include "empleado.h"



using namespace std;

Empleado::Empleado(string nombre, double salarioBase) : nombre(nombre), salarioBase(salarioBase) {}

string Empleado::getNombre() const {
    return nombre;
}

double Empleado::getSalarioBase() const { // Implementación del getter
    return salarioBase;
}

double Empleado::calcularSalario() const {
    return salarioBase;
}

string Empleado::getTipoEmpleado() const {
    return "Empleado";
}

DesarrolladorJunior::DesarrolladorJunior(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}
double DesarrolladorJunior::calcularSalario() const {
    return getSalarioBase(); // ¡Ahora sí usamos el getter!
}
string DesarrolladorJunior::getTipoEmpleado() const {
    return "Desarrollador Junior";
}

DesarrolladorSenior::DesarrolladorSenior(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}
double DesarrolladorSenior::calcularSalario() const {
    return getSalarioBase() * 1.20; // ¡Usando el getter!
}
string DesarrolladorSenior::getTipoEmpleado() const {
    return "Desarrollador Senior";
}

LiderTecnico::LiderTecnico(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}
double LiderTecnico::calcularSalario() const {
    return getSalarioBase() * 1.25; // ¡Usando el getter!
}
string LiderTecnico::getTipoEmpleado() const {
    return "Lider Tecnico";
}

Tester::Tester(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}
double Tester::calcularSalario() const {
    return getSalarioBase() * 1.05; // ¡Usando el getter!
}
string Tester::getTipoEmpleado() const {
    return "Tester";
}