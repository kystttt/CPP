#pragma once
#include <iostream>
#include <string>


using namespace std;


class cat {

public:
	string name;
	int weight;

	cat() : name(" "), weight(0){}
	cat(string name, int weight) : name(name), weight(weight){}
	istream& operator>>(istream& input);
	bool operator>(cat ct);
};

