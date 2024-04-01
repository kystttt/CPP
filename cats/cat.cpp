#include "cat.h"


istream& cat::operator>>(istream& input) {
    cout << "Введите имя кота: ";
    string n;
    input >> n;
    name = n;
    cout << "Введите вес кота: ";
    int w;
    input >> w;
    weight = w;
    return input;
}

bool cat::operator>(cat ct) {
    return weight > ct.weight;
}
