#include "Node.h"
#include "BinTree.h"
#include <string>

using namespace std;


Node* BinTree::add(Node* node, string k, string v) {
    if (node == nullptr) {
        return new Node(k, v);
    }

    if (k < node->key) {
        node->Leftbranch = add(node->Leftbranch, k, v);
    }
    else if (k > node->key) {
        node->Rightbranch = add(node->Rightbranch, k, v);
    }

    return node;
}

void BinTree::add(string k, string v) {
    root = add(root, k, v);
}

string BinTree::search(Node* node, string k) {
    if (k == root->key) {
        return root->value;
    }
    while (node != nullptr) {
        if (k < node->key) {
            node = node->Leftbranch;
        }
        else if (k > node->key) {
            node = node->Rightbranch;
        }
        else {
            return node->value;
        }
    }
    return "This word not from this file!";
}

string BinTree::search(string k) {
    return search(root, k);
}
