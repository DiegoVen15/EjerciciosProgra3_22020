
#include "Byte.h"

Byte::Byte(void) {

	for (int i = 0; i < 8; i++) {
		bits[i] = 0;
	}
}

Byte::Byte(const char* bits1) {

	for (int i = 0; i < 8; i++) {

		bits[i] = bits1[i] - 48;
	}
}

std::ostream& operator << (std::ostream& out, const Byte& b1) {

	for (int i = 0; i < 8; i++) {
		cout << b1.bits[i];
	}

	return out;
}

Byte operator + (const Byte& b1, const Byte& b2) {

	Byte nuevo;
	int acarreo = 0;

	for (int i = 8 - 1; i >= 0; i--) {
		
		int resultado = 0;
		if (acarreo == 1) {
			if (b1.bits[i] == 1) {

				resultado = 0;
				acarreo = 1;
			}
			else {
				resultado = 1;
				acarreo = 0;
			}
			if (resultado == 0 && b2.bits[i] == 0 ) {
				resultado = 0;
				//acarreo = 0;
			}
			else if (resultado == 0 && b2.bits[i] == 1) {
				resultado = 1;
				//acarreo = 0;
			}
			else if (resultado == 1 && b2.bits[i] == 0) {
				resultado = 1;
				acarreo = 0;
			}
			else if (resultado == 1 && b2.bits[i] == 1) {
				resultado = 0;
				acarreo = 1;
			}
		}
		else {
			if (b1.bits[i] == 0 && b2.bits[i] == 0) {
				resultado = 0;
				acarreo = 0;
			}
			else if (b1.bits[i] == 1 && b2.bits[i] == 0 || b1.bits[i] == 0 && b2.bits[i] == 1) {
				resultado = 1;
				acarreo = 0;
			}
			else if (b1.bits[i] == 1 && b2.bits[i] == 1) {
				resultado = 0;
				acarreo = 1;
			}
		}
		nuevo.bits[i] = resultado;
	}
	return nuevo;
}

Byte Byte::operator~(void) {

	for (int i = 0; i < 8; i++) {

		this->bits[i] = this->bits[i] == 1 ? 0 : 1;
	}
	return *this;
}

Byte operator - (const Byte& b1, const Byte& b2) {
	Byte nuevo;
	int acarreo = 0;

	for (int i = 8 - 1; i >= 0; i--) {

		int resultado = 0;
		if (acarreo == 1) {
			if (b1.bits[i] == 1) {

				resultado = 0;
				acarreo = 1;
			}
			else {
				resultado = 1;
				acarreo = 0;
			}
			if (resultado == 0 && b2.bits[i] == 0) {
				resultado = 0;
				//acarreo = 0;
			}
			else if (resultado == 0 && b2.bits[i] == 1) {
				resultado = 1;
				acarreo = 1;
			}
			else if (resultado == 1 && b2.bits[i] == 0) {
				resultado = 1;
				acarreo = 0;
			}
			else if (resultado == 1 && b2.bits[i] == 1) {
				resultado = 0;
				acarreo = 0;
			}
		}
		else {
			if (b1.bits[i] == 0 && b2.bits[i] == 0) {
				resultado = 0;
				acarreo = 0;
			}
			else if (b1.bits[i] == 1 && b2.bits[i] == 0 ) {
				resultado = 1;
				acarreo = 0;
			}
			else if (b1.bits[i] == 0 && b2.bits[i] == 1) {
				resultado = 0;
				acarreo = 1;

			}
			else if (b1.bits[i] == 1 && b2.bits[i] == 1) {
				resultado = 0;
				//acarreo = 0;
			}
		}
		nuevo.bits[i] = resultado;
	}
	return nuevo;
}
Byte operator * (const Byte& b1, const Byte& b2) {
	
	for (int i = 8 - 1; i >= 0; i--) {
		if (b2.bits[i] == 0 || b1.bits[i] == 0) {
			return 0;
		}
		if (b1.bits[i] == 1) {
			return b2.bits[i];
		}
		else {
			return operator *(b1.bits[i] >> 1, b2.bits[i] << 1);
		}
	}
}
int Byte::obtenerDecimal(){
	int decimal = 0;
	int expo = 1;
	int nuevo;

	for (int i = 0; i < 8; i++) {
		nuevo = this->bits[i];

		if (nuevo == 1) {
			decimal += expo;
		}
		expo = expo * 2;
	}
	return decimal;
}
Byte operator&(const Byte& b1, const Byte& b2){
	Byte nuevo;

	for (int i = 0; i < 8; i++)
	{
		if ((b1.bits[i] && b2.bits[i]) == 0)
		{
			nuevo.bits[i] = 0;
		}
		else if ((b1.bits[i] && b2.bits[i]) == 1)
		{
			nuevo.bits[i] = 1;
		}
	}
	return nuevo;
}

Byte operator|(const Byte& b1, const Byte& b2){
	Byte nuevo;

	for (int i = 0; i < 8; i++)
	{
		if ((b1.bits[i] && b2.bits[i]) == 0)
		{
			nuevo.bits[i] = 0;
		}
		if (b1.bits[i] || b2.bits[i] == 1)
		{
			nuevo.bits[i] = 1;
		}
	}
	return nuevo;
}
Byte operator^(const Byte& b1, const Byte& b2){
	Byte nuevo;

	for (int i = 0; i < 8; i++)
	{
		if ((b1.bits[i] && b2.bits[i]) == 1)
		{
			nuevo.bits[i] = 0;
		}
		else if (b1.bits[i] || b2.bits[i] == 1)
		{
			nuevo.bits[i] = 1;
		}
		else if ((b1.bits[i] && b2.bits[i]) == 0)
		{
			nuevo.bits[i] = 0;
		}

	}

	return nuevo;
}

}
