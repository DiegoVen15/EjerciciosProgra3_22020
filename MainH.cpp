#include <iostream>
#include <conio.h>
#include "Dec.h"
#include "Oct.h"
#include "Hex.h"
#include "Bin.h"


using std::cout;

int main() {
	Dec nDec(0, 0, 3, 7);

	nDec.Suma();
	cout << " " << nDec;
	nDec.Resta();
	cout << " " << nDec;
	nDec.Multiplicar();
	cout << " " << nDec;
	nDec.dividir();
	cout << " " << nDec;

	Bin nBin(0, 0, "1100001", "1100010");

	nBin.Suma();
	cout << " " << nBin;
	nBin.Resta();
	cout << " " << nBin;
	nBin.Multiplicar();
	cout << " " << nBin;
	nBin.dividir();
	cout << " " << nBin;

	Oct nOct(0, 0, 6, 4);

	nOct.Suma();
	cout << " " << nOct;
	nOct.Resta();
	cout << " " << nOct;
	nOct.Multiplicar();
	cout << " " << nOct;
	nOct.dividir();
	cout << " " << nOct;

	Hex nHex(0, 0, "A", "E");

	nHex.Suma();
	cout << " " << nHex;
	nHex.Resta();
	cHex << " " << nHex;
	nHex.Multiplicar();
	cout << " " << nHex;
	nHex.dividir();
	cout << " " << nHex;
}