#include <iostream>
#include <iomanip>
#include <vector>
#include "Empleado.h"
#include "EmpleadoAsalariado.h"
#include "EmpleadoPorComision.h"
#include "EmpleadoBaseMasComision.h"
using namespace std;

void virtualViaApuntador(const Empleado* const);
void virtualViaReferencia(const Empleado&);

int main() {

	cout << fixed << setprecision(2);

	EmpleadoAsalariado empleadoAsalariado("John", "Smith", "111-11-1111", 800);
	EmpleadoPorComision empleadoPorComision("Sue", "Jones", "333-33-3333, 10000, .06");
	EmpleadoBaseMasComision empleadoBaseMasComision("Bob", "Lewis", "444-44-4444", 5000, .04, 300);

	cout << "Empleados procesados en forma individual, usando vinculation estatica:\n\n";

	empleadoAsalariado.imprimir();
	cout << "\nobtuvo $" << empleadoAsalariado.ingresos() << "\n\n";
	empleadoPorComision.imprimir();
	cout << "\nobtuvo $" << empleadoPorComision.ingresos() << "\n\n";
	empleadoBaseMasComision.imprimir();
	cout << "\nobtuvo $" << empleadoBaseMasComision.ingresos() << "\n\n";

	vector <Empleado*> empleados(3);

	empleados[0] = &empleadoAsalariado;
	empleados[1] = &empleadoPorComision;
	empleados[2] = &empleadoBaseMasComision;

	cout << "Empleados procesados en forma polimorfica, mediante vinculation dinamica:\n\n";

	cout << "Llamadas a funciones virtuales realizadas desde apuntadores de la clase base:\n\n";

	for (const Empleado* empleadoPtr : empleados) virtualViaApuntador(empleadoPtr);

	cout << "Llamadas a funciones virtuales realizadas desde referencias de la clase base:\n\n";

	for (const Empleado* empleadoPtr : empleados) virtualViaReferencia(*empleadoPtr);
}

void virtualViaApuntador(const Empleado* const claseBasePtr) {

	claseBasePtr->imprimir();
	cout << "\nobtuvo $" << claseBasePtr->ingresos() << "\n\n";
}

void virtualViaReferencia(const Empleado& claseBaseRef) {

	claseBaseRef.imprimir();
	cout << "\nobtuvo $" << claseBaseRef.ingresos() << "\n\n";
}
