#include "Polinom.h"
#include <iostream>


using namespace std;


int Pow(int num, int deg) {
	int p = 1;
	for (int i = 0; i < deg; i++) {
		p *= num;
	}
	return p;
}
