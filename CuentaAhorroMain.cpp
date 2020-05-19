#include <conio.h>
#include "CuentaAhorro.h"

using namespace std;

CuentaAhorro::CuentaAhorro() : interes(0) 
{}

CuentaAhorro::CuentaAhorro(double interes1) : interes(interes1)
{}

float CuentaAhorro::calcularInteres() {
	return this->saldo * 0.15;
}

float CuentaAhorro::getAbono() {
	this->abono;
}
void CuentaAhorro::setSaldo(int saldo1) {
	this->saldo = saldo1;
}
int CuentaAhorro::getSaldo() {
	this->saldo;
}
float CuentaAhorro::getRetiro() {
	this->retiro;
}
float CuentaAhorro:: miembroAbonar(float abono1) {
	abono = abono1;
	return this->abono + saldo;
}
float CuentaAhorro::miembroCargar(float retiro1) {
	if (saldo < retiro1) {
		cout << "No se puede retirar";
	}
	else {
		return this->saldo - retiro1;
	}
}





