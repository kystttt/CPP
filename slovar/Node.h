#pragma once
#include <string>

using namespace std;


class Node {
public:
    string key;
    string value;
    Node* Leftbranch;
    Node* Rightbranch;

    Node(string k, string v) : key(k), value(v), Leftbranch(nullptr), Rightbranch(nullptr) {}
};
