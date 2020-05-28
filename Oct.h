#pragma once
#ifndef OCT_H
#define OCT_H
#include "Op.h"
class Oct : public Op {

protected:

	int numOct;
	int numOct2;
public:
	Oct();
	Oct(int, int, int, int);

	~Oct();
	void setNumOct(int);
	void setNumOct2(int);

	int getNumOct(void);
	int getNumOct2(void);

	int Suma(void);
	int Resta(void);
	int Multiplicar(void);
	float dividir(void);
};
#endif // !OCT_H
