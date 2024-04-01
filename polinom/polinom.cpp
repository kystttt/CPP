#include "Polinom.h"
#include <iostream>


using namespace std;


istream& Polinom::operator>>(istream& input) {
	delete[] arrayCoef;
	cout << "Введите степень многочлена: ";
	input >> degP;
	arrayCoef = new int[degP + 1];
	cout << "Введите целые коэффиценты многочлена в порядке уменьшения степени: ";
	for (int i = 0; i < degP + 1; i++) {
		int k;
		input >> k;
		arrayCoef[i] = k % 3;
	}
	return input;
}


Polinom& Polinom::operator+(Polinom& polinom1) {
	int oldDegP = degP;
	degP = max(degP, polinom1.degP);
	int* oldarrayCoef = new int[oldDegP + 1];
	for (int i = 0; i < oldDegP + 1; i++) {
		oldarrayCoef[i] = arrayCoef[i];
	}
	delete[] arrayCoef;
	int k = 0;
	arrayCoef = new int[degP + 1];
	if (oldDegP < polinom1.degP) {
		for (int i = 0; i < degP + 1; i++) {
			if (i >= polinom1.degP - oldDegP) {
				arrayCoef[i] = (oldarrayCoef[k++] + polinom1.arrayCoef[i]) % 3;
			}
			else arrayCoef[i] = polinom1.arrayCoef[i] % 3;
		}
	}
	else if (oldDegP > polinom1.degP) {
		for (int i = 0; i < degP + 1; i++) {
			if (i >= oldDegP - polinom1.degP) {
				arrayCoef[i] = (oldarrayCoef[i] + polinom1.arrayCoef[k++]) % 3;
			}
			else arrayCoef[i] = oldarrayCoef[i] % 3;
		}
	}
	else {
		for (int i = 0; i < degP + 1; i++) {
			arrayCoef[i] = polinom1.arrayCoef[i] + oldarrayCoef[i] % 3;
		}
	}

	return *this;

}


Polinom& Polinom::operator=(Polinom& polinom1) {
	degP = polinom1.degP;
	delete[] arrayCoef;
	arrayCoef = new int[degP + 1];
	for (int i = 0; i < degP + 1; i++) {
		arrayCoef[i] = polinom1.arrayCoef[i];
	}
	return *this;
}


void Polinom::PolinomValueInPoint(int point){
	int value = 0;
	int deg = degP;
	for (int i = 0; i < degP; i++) {
		value += (arrayCoef[i] * Pow(point, deg--));
	}
	value += arrayCoef[degP];
	value %= 3;
	cout << "Value of this polinom in " << point << " is: " << value << endl;
}

