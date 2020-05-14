#pragma once

#ifndef BYTE_H
#define BYTE_H
#include <iostream>

class Byte {

	friend std::ostream& operator<<(std::ostream&, const Byte);
	friend Byte operator+(const Byte&, const Byte&);
	friend Byte operator&(const Byte&, const Byte&);
	friend Byte operator|(const Byte&, const Byte&);
	friend Byte operator^(const Byte&, const Byte&);
	friend Byte operator-(const Byte&, const Byte&);
	friend Byte operator*(const Byte&, const Byte&);
		

private:
	int bits[8];

public:
	Byte(void);
	Byte(const char*);
	int obtenerDecimal();
	Byte operator~(void);

};

#endif // !BYTE_H
