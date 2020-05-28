#pragma once
#ifndef HEX_H
#define HEX_H
#include "Op.h"

class Hex : public Op{
protected:

	const char* numHex;
	const char* numHex2;
public:
	Hex();
	Hex(int, int, const char*, const char*);

	~Hex();
	void setNumHex(const char*);
	void setNumHex2(const char*);

	int getNumHex(void);
	int getNumHex2(void);

	int Suma(void);
	int Resta(void);
	int Multiplicar(void);
	float dividir(void);
};

#endif // !HEX_H
