#include <iostream>
#include <string>
#include <fstream>
#include "Node.h"
#include "BinTree.h"

using namespace std;


int main() {
    BinTree Tree;
    setlocale(LC_ALL, "Russian");

    ifstream dicfile("dic.txt");


    while (!dicfile.eof()) {
        string k, v;
        dicfile >> k >> v;
        Tree.add(k, v);
    }
    string sw;
    cin >> sw;

    cout << Tree.search(sw);
    return 0;
}
