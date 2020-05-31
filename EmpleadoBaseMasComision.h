#pragma once
#ifndef BASEMAS_H
#define BASEMAS_H
#include <string>
#include "EmpleadoPorComision.h"

class EmpleadoBaseMasComision : public EmpleadoPorComision{

public:
	EmpleadoBaseMasComision(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0);
	virtual ~EmpleadoBaseMasComision(){ }

	void establecerSalarioBase(double);
	double obtenerSalarioBase() const;

	virtual double ingresos() const override;
	virtual void imprimir() const override;

private:
	double salarioBase;
};


#endif // !BASEMAS_H