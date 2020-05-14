#include <conio.h>
#include "Byte.h"

using std::cout;

int main() {

	Byte b1("10000011");
	Byte b2("10011100");

	cout << "Byte: " << b1 << "\n";
	cout << "Byte: " << b2 << "\n";

	Byte b3 = b1 + b2;

	cout << b3;

	~b1;
	Byte b4 = b1 | b2;
	cout << b4;
	Byte b5 = b1 & b2;
	cout << b5;
	Byte b6 = b1 ^ b2;
	cout << b6;
	Byte b7 = b1 - b2;
	cout << b7;
	Byte b8 = b1 * b2;
	cout << b8;	

	b1.obtenerDecimal();


	cout << "Not: " << b1 << " \n";

	_getch();
}