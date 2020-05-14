#include <conio.h>
#include "Byte.h"

using std::cout;

int main() {

	Byte b1("10000011");
	Byte b2("10011100");

	cout << "Byte: " << b1 << "\n";
	cout << "Byte: " << b2 << "\n";

	Byte b3 = b1 + b2;
	cout << "SUMA: " << b3 << "\n";
	cout << "NOT: " << ~b1 << "\n";
	Byte b4 = b1 | b2;
	cout << "OR: " << b4 <<"\n";
	Byte b5 = b1 & b2;
	cout << "AND: " << b5 << "\n";
	Byte b6 = b1 ^ b2;
	cout << "XOR: " << b6 << "\n";
	Byte b7 = b1 - b2;
	cout << "Resta: " << b7 << "\n";
	Byte b8 = b1 * b2;
	cout << "Multiplicacion: "<< b8 <<" \n";	

	cout << "Decimal: " << b1.obtenerDecimal() << " \n";


	_getch();
}