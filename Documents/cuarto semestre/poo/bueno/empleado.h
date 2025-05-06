//
// Created by alesso on 6/05/2025.
//



#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>
#include <vector>

using namespace std; // ¡Aquí está el cambio!

class Empleado {
protected:
    string nombre;
    double salarioBase;

public:
    Empleado(string nombre, double salarioBase);
    virtual ~Empleado() = default;

    string getNombre() const;
    virtual double calcularSalario() const;
    virtual string getTipoEmpleado() const;
    double getSalarioBase() const; // ¡Añadido el getter!

};

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(string nombre, double salarioBase);
    double calcularSalario() const override;
    string getTipoEmpleado() const override;
};

class DesarrolladorSenior : public Empleado {
public:
    DesarrolladorSenior(string nombre, double salarioBase);
    double calcularSalario() const override;
    string getTipoEmpleado() const override;
};

class LiderTecnico : public Empleado {
public:
    LiderTecnico(string nombre, double salarioBase);
    double calcularSalario() const override;
    string getTipoEmpleado() const override;
};

class Tester : public Empleado {
public:
    Tester(string nombre, double salarioBase);
    double calcularSalario() const override;
    string getTipoEmpleado() const override;
};

#endif
