#pragma once
#include "Node.h"
#include <string>

using namespace std;


class BinTree {
private:
    Node* root;

    Node* add(Node* node, string k, string v);
    string search(Node* node, string k);


public:
    BinTree() : root(nullptr) {}

    Node* Getroot() { return root; }
    void add(string k, string v);
    string search(string k);
};
