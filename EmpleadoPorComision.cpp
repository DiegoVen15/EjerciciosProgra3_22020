#include <iostream>
#include <stdexcept>
#include "EmpleadoPorComision.h"
using namespace std;

EmpleadoPorComision::EmpleadoPorComision(const std::string& nombre, const std::string& apellido, const std::string& nss, double ventas, double tarifa) : Empleado(nombre, apellido, nss) {

	establecerVentasBrutas(ventas);
	establecerTarifaComision(tarifa);
}

void EmpleadoPorComision::establecerVentasBrutas(double ventas) {

	if (ventas >= 0.0)
		ventasBrutas = ventas;
	else
		throw invalid_argument("Las ventas brutas deben ser >= 0.0");
}

double EmpleadoPorComision::obtenerVentasBrutas() const {

	return ventasBrutas;	
}

void EmpleadoPorComision::establecerTarifaComision(double tarifa) {

	if (tarifa > 0.0 && tarifa < 1.0)
		tarifaComision = tarifa;
	else
		throw invalid_argument("La tarifa de comision debe ser > a 0.0 y menor a 1.0");
}

double EmpleadoPorComision::obtenerTarifaComision() const {

	return tarifaComision;
}

double EmpleadoPorComision::ingresos() const {

	return obtenerTarifaComision() * obtenerVentasBrutas();
}

void EmpleadoPorComision::imprimir() const {

	cout << "Empleado por comision: ";
	Empleado::imprimir();
	cout << "\nventas brutas: " << obtenerVentasBrutas() << "; tarifa comision: " << obtenerTarifaComision();
}

	