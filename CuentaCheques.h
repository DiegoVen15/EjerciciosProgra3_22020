#pragma once
#ifndef  CUENTACHEQUES_H
#define CUENTACHEQUES_H

#include "Cuenta.h"

class CuentaCheques : public cuenta {

private:
	double cuotas;
public:
	CuentaCheques();
	CuentaCheques(float saldoBase) {
		if (saldoBase < 0) std::cout << "Saldo inicial no valido";
		saldoBase = 0;
	};

	float abono, retiro;
	int saldo;
	void setSaldo(int);
	int getSaldo(void);


	double getCuotas();
	float getAbono();
	float getRetiro();
	double calcularInteres();
	void miembroAbonar(float);
	bool miembroCargar(float);
};
#endif // ! CUENTACHEQUES_H
