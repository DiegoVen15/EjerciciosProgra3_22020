#pragma once
#ifndef DEC_H
#define DEC_H

#include "Op.h"
class Dec : public Op {

protected:

	int numDec;
	int numDec2;
public:
	Dec();
	Dec(int, int, int, int);

	~Dec();
	void setNumDec(int);
	void setNumDec2(int);

	int getNumDec(void);
	int getNumDec2(void);

	int Suma(void);
	int Resta(void);
	int Multiplicar(void);
	float dividir(void);
};
#endif // !DEC_H
