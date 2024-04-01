#include "replace.h"
#include <iostream>


using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	string str = "NOT((A OR NOT B) AND (A OR B)) OR NOT (A AND NOT B OR TRUE)";
	cout << "Правильная строка: ";
	cout << replace(str);
	return 0;
}
