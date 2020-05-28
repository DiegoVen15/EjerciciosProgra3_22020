#pragma once
#ifndef OP_H
#define OP_H

#include <string>
using namespace std;

class Op {

protected:
	int numero;
	int numero2;
public:
	Op();
	Op(int, int);

	~Op();
	void setNum(int);
	void setNum2(int);
	int getNum(void);
	int getNum2(void);
	
	virtual int Suma(void) = 0;
	virtual int Resta(void) = 0;	
	virtual int Multiplicar(void) = 0;
	virtual float dividir(void) = 0;

	
};
#endif // !OP_H

