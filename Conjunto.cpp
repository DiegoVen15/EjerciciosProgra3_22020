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

}

std::ostream& operator <<(std::ostream& out, const Conjunto& C) {

	for (int i = 0; i < 10; i++) {
		out << C.conj[i];
	}
}

Conjunto operator+(const Conjunto& C1, const Conjunto& C2) {

	int mayor, int menor;
	int res = 0;
	int res2;
	for (int i = 0; i < 10; i++) {
		if (sizeof(C1.conj[i]) > sizeof(C2.conj[])) {
			mayor = C1.conj[i];
			menor = C2.conj[i];
		}
		else {
			mayor = C2.conj[i];
			menor = C1.conj[i];
		}
	}

	for (int o = 10 - 1; o >= 0; o--) {
		for (int i = 0; i < sizeof(C1.conj[o]); i++) {
			for (int x = 0; i < sizeof(C2.conj[o]); i++) {
				if (C1.conj[i] == C2.conj[i]) {
					res = [i];
				}
				if (C1.conj[i] == C2.conj[i]) {
					res = [i];
					res2 = [i];
				}
			}
		}
	}
}

Conjunto::bubble() {

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