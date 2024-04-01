#include "priority.h"
#include "logic.h"
#include "value.h"
#include <iostream>
#include <string>
#include <stack>


using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    string s;
    getline(cin, s);
    value(s);
    return 0;
}

