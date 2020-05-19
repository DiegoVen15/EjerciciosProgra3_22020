#pragma once
#include <iostream>
#ifndef CUENTA_H
#define CUENTA_H

class cuenta {

private:
	float saldoAbonado;
	
public:
	cuenta();
	cuenta(float saldoBase) {
		if (saldoBase < 0) std::cout << "Saldo inicial no valido";
		saldoBase = 0;
	};

	float saldo;
	void setSaldo(int);
	int getSaldo(void);

	float getAbono();
	float getRetiro();
	void imprimirSaldo();
	void miembroAbonar(float);
	void miembroCargar(float);
};
#endif // !CUENTA_H

