#pragma once

#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <iostream>

class Conjunto {

	friend std::ostream& operator<<(std::ostream&, const Conjunto&);
	friend Conjunto operator+(const Conjunto&, const Conjunto&);
	friend Conjunto operator&(const Conjunto&, const Conjunto&);
	friend Conjunto operator-(const Conjunto&, const Conjunto&);
	friend Conjunto operator==(const Conjunto&, const Conjunto&);
private:
	int conj[10];

public:
	Conjunto(void);
	Conjunto(const char*);
	void bubble();

};

#endif //CONJUNTO_H
