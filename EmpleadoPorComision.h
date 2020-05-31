#pragma once
#ifndef COMISION_H
#define COMISION_H

#include <string>
#include "Empleado.h"

class EmpleadoPorComision : public Empleado {

public:
	EmpleadoPorComision(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0);
	virtual ~EmpleadoPorComision(){}

	void establecerTarifaComision(double);
	double obtenerTarifaComision() const;

	void establecerVentasBrutas(double);
	double obtenerVentasBrutas() const;

	virtual double ingresos() const override;
	virtual void imprimir() const override;

private:
	double ventasBrutas;
	double tarifaComision;
};
#endif // !COMISION_H
