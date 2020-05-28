#include "Conjunto.h"

Conjunto::Conjunto(void) {

	for (int i = 0; i < 10; i++) {
		conj[i] = -1;
 	}
}

Conjunto::Conjunto(const char* Conj1){
	
	for (int i = 0; i < 10; i++) {
		conj[i] = (int)Conj1[i] - 56;
	}
	Conjunto::bubble();
}

std::ostream& operator <<(std::ostream& out, const Conjunto& C) {

	for (int i = 0; i < 10; i++) {
		out << C.conj[i];
	}
	
}

Conjunto operator+(const Conjunto& C1, const Conjunto& C2) {

	Conjunto nuevo;	
	int mayor, int menor;
	int res = 0;
	int res2 = 0;
	for (int i = 0; i < 10; i++) {
		if (sizeof(C1.conj[i])/4 > sizeof(C2.conji[])/4) {
			mayor = C1.conj[i];
			menor = C2.conj[i];
		}
		else {
			mayor = C2.conj[i];
			menor = C1.conj[i];
		}
	}

	for (int o = 10 - 1; o >= 0; o--) {
		for (int i = 0; i < sizeof(C1.conj[o])/4; i++) {
			for (int x = 0; i < sizeof(C2.conj[o])/4; i++) {
				if (C1.conj[o] == C2.conj[]) {
					res = C1.conj[i];
					nuevo.conj[o] = res;
				}
				if (C1.conj[o] != C2.conj[o]) {
					res = C1.conj[i];
					res2 = C2.conj[i];

					nuevo.conj[o] = res;
					nuevo.conj[o+1] = res2;
				}
			}
		}
	}
	return nuevo;
	
}

Conjunto operator-(const Conjunto& C1, const Conjunto& C2) {

	Conjunto nuevo;
	int mayor, int menor;
	int res = 0;
	int res2 = 0;
	bool f = true;
	for (int i = 0; i < 10; i++) {
		if (sizeof(C1.conj[i]) / 4 > sizeof(C2.conj[i]) / 4) {
			mayor = C1.conj[i];
			menor = C2.conj[i];
		}
		else {	
			mayor = C2.conj[i];
			menor = C1.conj[i];
		}
	}

	for (int o = 10 - 1; o >= 0; o--) {
		for (int i = 0; i < sizeof(C1.conj[o]) / 4; i++) {

			f = true;
			for (int x = 0; i < sizeof(C2.conj[o]) / 4; i++) {
				if (C1.conj[o] == C2.conj[o]) {
					//res = C1.conj[i];
					f = false;
				}
			}
			if (f == true) {
				res = C1.conj[o];
			}
		}
		nuevo.conj[o] = res;
	}
	return nuevo;

}

Conjunto operator&(const Conjunto& C1, const Conjunto& C2) {

	Conjunto nuevo;
	int mayor, int menor;
	int res = 0;
	int res2 = 0;
	for (int i = 0; i < 10; i++) {
		if (sizeof(C1.conj[i]) / 4 > sizeof(C2.conj[]) / 4) {
			mayor = C1.conj[i];
			menor = C2.conj[i];
		}
		else {
			mayor = C2.conj[i];
			menor = C1.conj[i];
		}
	}

	for (int o = 10 - 1; o >= 0; o--) {
		for (int i = 0; i < sizeof(C1.conj[o]) / 4; i++) {
			for (int x = 0; i < sizeof(C2.conj[o]) / 4; i++) {
				if (C1.conj[i] == C2.conj[i]) {
					res = C1.conj[i];
				}
			}
		}
		nuevo.conj[o] = res;
	}
	return nuevo;
}

Conjunto operator==(const Conjunto& C1, const Conjunto& C2) {

	Conjunto nuevo;
	int mayor, int menor;
	int res = 0;
	int res2 = 0;
	for (int i = 0; i < 10; i++) {
		if (sizeof(C1.conj[i]) / 4 > sizeof(C2.conj[]) / 4) {
			mayor = C1.conj[i];
			menor = C2.conj[i];
		}
		else {
			mayor = C2.conj[i];
			menor = C1.conj[i];
		}
	}

	for (int o = 10 - 1; o >= 0; o--) {
		bool f = true;
		if (sizeof(C1.conj[o]) / 4 != sizeof(C2.conj[o]) / 4) {
			f = false;
		}
		else {
			for (int o = 10 - 1; o >= 0; o--) {
				if (C1.conj[i] != C2.conj[i]) {
					f = false;
					res = C1.conj[o];
				}
			}
		}
		nuevo.conj[o] = res;
	}
	return nuevo;
}


 void Conjunto::bubble() {
	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - 1; j++) {
			if (conj[j] < conj[j + 1]) {
				temp = conj[j];
				conj[j] = conj[j + 1];
				conj[j + 1] = temp;
			}
		}
	}

}