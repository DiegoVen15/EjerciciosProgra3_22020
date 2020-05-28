#include "Conjunto.h"
#include <iostream>

using namespace std;

int main() {

	Conjunto c1("738251");
	Conjunto c2("62943");

	Conjunto c3 = c1 + c2;
	c3.bubble();
	cout << c3;

	c3 = c1 & c2;
	c3.bubble();
	cout << c3;

	c3 = c1 - c2;
	c3.bubble();
	cout << c3;

	Conjunto c4("832517");

	if (c1 == c4) {
		std::cout << "Son iguales";
	}
	else {
		std::cout << "Son distintos";
	}
}