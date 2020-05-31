#pragma once
#ifndef ASALARIADO_H
#define ASALAIADO_H

#include <string>
#include "Empleado.h"

class EmpleadoAsalariado : public Empleado {

public: 
	EmpleadoAsalariado(const std::string&, const std::string&, const std::string&, double = 0.0);
	virtual ~EmpleadoAsalariado() {}

	void establecerSalarioSemanal(double);
	double obtenerSalarioSemanal() const;

	virtual double ingresos() const override;
	virtual void imprimir() const override;

private:
	double salarioSemanal;
};
#endif // !ASALARIADO_H
