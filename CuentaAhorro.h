#pragma once
#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include "Cuenta.h"
class CuentaAhorro : public cuenta{

private:
	double interes;

public:
	CuentaAhorro();
	CuentaAhorro(float saldoBase) {
		if (saldoBase < 0) std::cout << "Saldo inicial no valido";
		saldoBase = 0;
	};

	float abono, retiro;
	int saldo;
	void setSaldo(int);
	int getSaldo(void);


	float getAbono();
	float getRetiro();
	double calcularInteres();
	float miembroAbonar(float);
	float miembroCargar(float);
};
#endif // !CUENTAAHORRO_H
