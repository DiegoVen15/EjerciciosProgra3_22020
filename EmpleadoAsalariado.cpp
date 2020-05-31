#include <iostream>
#include <stdexcept>
#include "EmpleadoAsalariado.h"		
using namespace std;
//constructor
EmpleadoAsalariado::EmpleadoAsalariado(const string& nombre, const string& apellido, const string& nss, double salario) : Empleado(nombre, apellido, nss) {
	establecerSalarioSemanal(salario);
}


void EmpleadoAsalariado::establecerSalarioSemanal(double salario) {
	if (salario >= 0.0) {
		salarioSemanal = salario;
	}
	else {
		throw invalid_argument("El salario semanal debe ser >= 0.0");
	}
}

double EmpleadoAsalariado::obtenerSalarioSemanal()const {
	return salarioSemanal;
}

double EmpleadoAsalariado::ingresos()const {
	return obtenerSalarioSemanal();
}

void EmpleadoAsalariado::imprimir()const {
	cout << "empleado asalariado:";
	Empleado::imprimir();
	cout << "\nsalario semanal : " << obtenerSalarioSemanal();
}