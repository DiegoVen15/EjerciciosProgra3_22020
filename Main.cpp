
#include <iostream>
#include <conio.h>
#include "Racional.h"

using std::cout;

int main() {

	/*Racional n1;;
	Racional n2(1, 2);
	Racional n3(5, 3);*/

	Racional num1(1);
	Racional den1(2);

	Racional num2(4);
	Racional den2(2);

	Racional n1(1, 2);
	Racional n2(4, 2);

	n1.sumar();
	n1.restar();
	n1.multiplicar();
	n1.dividir();

	/*cout << "n1: \n";
	n1.imprimirRacional();
	n1.imprimirDecimal();

	cout << "n2: \n";
	n2.imprimirRacional();
	n2.imprimirDecimal();

	cout << "n3: \n";
	n3.imprimirRacional();
	n3.imprimirDecimal();*/

	_getch();
}
