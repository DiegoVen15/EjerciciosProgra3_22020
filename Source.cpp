#include <conio.h>
#include "Cuenta.h"
using namespace std;	

cuenta::cuenta() : saldoAbonado(0)
{}

cuenta::cuenta(float saldoAbonado1) : saldoAbonado(saldoAbonado1)
{}

float cuenta::getAbono() {
	this->abono;
}
void cuenta::setSaldo(int saldo1) {
	this->saldo = saldo1;
}
int cuenta::getSaldo() {
	this->saldo;
}
float cuenta::getRetiro() {
	this->retiro;
}
float cuenta::miembroAbonar(float abono1) {
	abono = abono1;
	return this->abono + saldo;
}
float cuenta::miembroCargar(float retiro1) {
	if (saldo < retiro1) {
		cout << "No se puede retirar";
	}
	else {
		return this->saldo - retiro1;
	}
}

void cuenta::imprimirSaldo(){

	cout << "Saldo: " << getSaldo << " \n";
}