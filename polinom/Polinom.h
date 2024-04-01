#include <iostream>


using namespace std;

class Polinom {
private:
	int degP;
	int* arrayCoef;


public:
	Polinom() : degP(1), arrayCoef(new int[2]) {}
	Polinom(int n) : degP(n), arrayCoef(new int[n+1]){}
	
	
	int getDegP() {return degP; }
	int* getArrayCoef() { return arrayCoef; }
	void print();
	Polinom& operator=(Polinom& polinom1);
	istream& operator>>(istream& input);
	Polinom& operator+(Polinom& polinom1);
	void PolinomValueInPoint(int point);
};

// функция возведения в степень целого числа
int Pow(int n, int deg);
