#include "Polinom.h"
#include <iostream>
#include <string>


using namespace std;


void Polinom::print() {
	int slot = 0;
	int sum = 0;

	for (int i = 0; i <= degP; i++) {
		sum += arrayCoef[i];
	}

	if (sum != 0) {
		while (sum != 0) {
			if (arrayCoef[slot] == 0) {
				slot++;
				continue;
			}
			else { 
				sum -= arrayCoef[slot];
				if (arrayCoef[slot] == 1 && slot != degP) { cout << '\0'; }
				else { cout << arrayCoef[slot]; };
				if (slot != degP) { cout << 'x'; };
				if (slot < degP - 1) { cout << '^' << degP - slot; };
				if (sum > 0) { cout << " + "; };
				slot++;
			}
		}
	}
	else  cout << 0; 
	cout << endl;
}
