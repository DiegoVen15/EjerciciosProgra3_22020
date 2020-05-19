#include <conio.h>
#include "CuentaCheques.h"
#include "CuentaAhorro.h"
using namespace std;

CuentaCheques::CuentaCheques() : cuotas(0)
{}

CuentaCheques::CuentaCheques(double cuotas1) : cuotas(cuotas1) 
{}

float CuentaCheques::getAbono() {
	this->abono;
}
void CuentaCheques::setSaldo(int saldo1) {
	this->saldo = saldo1;
}
int CuentaCheques::getSaldo() {
	this->saldo;
}
float CuentaCheques::getRetiro() {
	this->retiro;
}
double CuentaCheques::getCuotas() {
	this->cuotas;
}
float cuenta::miembroAbonar(float abono1) {
	abono = abono1;
	return this->abono + saldo - cuotas;
}
bool cuenta::miembroCargar() {
	int saldoInicial = saldo;
	if (saldo < retiro) {
		cout << "No se puede retirar";
	}
	else {
		saldo = saldo - retiro - cuotas;
		if (saldoInicial != saldo) {
			cout << "Se cobro la cuota\n";
			return true;
		}
	}
	return false;
}

void cuenta::imprimirSaldo() {

	cout << "Saldo: " << getSaldo << " \n";
}


