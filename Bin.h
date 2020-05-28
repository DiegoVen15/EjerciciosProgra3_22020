#pragma once
	
#ifndef BIN_H
#define BIN_H

#include "Op.h"
class Bin : public Op {

protected:

	const char* numBin;
	const char* numBin2;
public:
	Bin();
	Bin(int, int , const char*, const char*);

	~Bin();
	void setNumBin(const char*);
	void setNumBin2(const char*);

	int getNumBin(void);
	int getNumBin2(void);

	int Suma(void);
	int Resta(void);
	int Multiplicar(void);
	float dividir(void);
};
#endif // !BIN_H
