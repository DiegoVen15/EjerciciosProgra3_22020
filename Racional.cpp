
#include "Racional.h"

using namespace std;

Racional::Racional(void): numerador(0), denominador(0)
{}

Racional::Racional(int numerador1, int denominador1)
	: numerador(numerador1), denominador(denominador1)
{
	simplificar();
}

void Racional::imprimirRacional(void) {
	
	if (numerador == 0 && denominador == 0) {
		cout << "Resultado no definido\n";
		return;
	}
	else if (denominador == 0) {	
		cout << "No se puede dividir entre 0\n";
		return;
	}
	cout << "Forma racional: {" << numerador << "/" << denominador << "}\n"
}

void Racional::imprimirDecimal(void) {
	if (numerador == 0 && denominador == 0) {
		cout << "Resultado no definido\n";
		return;
	}else if (denominador == 0) {
		cout << "No se puede dividir entre 0\n";
		return;
	}
	cout << "Forma decimal: {" << (float(numerador) / float(denominador)) << "}\n";
}

void Racional::simplificar(void) {
	
	int numeroMenor = obtenerOperandoMenor;
	for (int i = 2; i <= numeroMenor; i++) {	
		if (numerador % i == 0 && denominador % i == 0) {

			numerador = numerador / i;
			denominador = denominador / i;
			i = 1;
		}
	}
}

int Racional::obtenerOperandoMenor() {

	return(numerador < denominador ? numerador : denominador);
}

void Racional::multiplicar(void) {
	numerador1 = 1;
	denominador1 = 2;
	numerador2 = 4;
	denominador2 = 2;
	if (numerador1 || numerador2 == 0 && denominador1 || denominador2 == 0) {
		cout << "Resultado no definido\n";
		return;
	}
	else if (denominador1 || denominador2 == 0) {
		cout << "No se puede dividir entre 0\n";
		return;
	}

	cout << numerador1 * numerador2 << "/" << denominador1 * denominador2;
}

void Racional::dividir(void) {
	numerador1 = 1;
	denominador1 = 2;
	numerador2 = 4;
	denominador2 = 2;
	if (numerador1 || numerador2 == 0 && denominador1 || denominador2 == 0) {
		cout << "Resultado no definido\n";
		return;
	}
	else if (denominador1 || denominador2 == 0) {
		cout << "No se puede dividir entre 0\n";
		return;
	}

	cout << numerador1 * denominador2 << "/" << denominador1 * numerador2;
}

void Racional::sumar(void) {
	numerador1 = 1;
	denominador1 = 2;
	numerador2 = 4;
	denominador2 = 2;
	if (numerador1 || numerador2 == 0 && denominador1 || denominador2 == 0) {
		cout << "Resultado no definido\n";
		return;
	}
	else if (denominador1 || denominador2 == 0) {
		cout << "No se puede dividir entre 0\n";
		return;
	}
	else if (denominador1 == denominador2) {

		cout << numerador1 + numerador2 << "/" << denominador1;
	}
	else if (denominador1 != denominador2) {
		
		cout << numerador1 * denominador2 + denominador1 * numerador2 << "/" << denominador1 * denominador2;
	}
}

void Racional::restar(void) {
	numerador1 = 1;
	denominador1 = 2;
	numerador2 = 4;
	denominador2 = 2;
	if (numerador1 || numerador2 == 0 && denominador1 || denominador2 == 0) {
		cout << "Resultado no definido\n";
		return;
	}
	else if (denominador1 || denominador2 == 0) {
		cout << "No se puede dividir entre 0\n";
		return;
	}
	else if (denominador1 == denominador2) {

		cout << numerador1 - numerador2 << "/" << denominador1;
	}
	else if (denominador1 != denominador2) {

		cout << numerador1 * denominador2 - denominador1 * numerador2 << "/" << denominador1 * denominador2;
	}
}





	
