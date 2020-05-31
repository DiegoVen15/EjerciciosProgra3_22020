#include <iostream>
#include <stdexcept>
#include "EmpleadoBaseMasComision.h"
using namespace std;

EmpleadoBaseMasComision::EmpleadoBaseMasComision(const string& nombre, const string& apellido, const string& nss, double ventas, double tarifa, double salario) : EmpleadoPorComision(nombre, apellido, nss, ventas, tarifa, salario) {
	establecerSalarioBase(salario);
}

void EmpleadoBaseMasComision::establecerSalarioBase(double salario) {
	if (salario >= 0.0)
		salarioBase = salario;
	else
		throw invalid_argument("El salario debe ser >=0");
}

double EmpleadoBaseMasComision::obtenerSalarioBase() const {
	return salarioBase;
}

double EmpleadoBaseMasComision::ingresos() const {
	return obtenerSalarioBase() + EmpleadoPorComision::ingresos();
}

void EmpleadoBaseMasComision::imprimir() const {
	cout << "con salario base ";
	EmpleadoPorComision::imprimir();
	cout << "salario base: " << obtenerSalarioBase;
}