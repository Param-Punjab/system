#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};

int main() {
    cout << "tree" << endl;
    Node* root = new Node();

    cout << "Root: " << root << endl;
    cout << "*Root: " << root->data << endl;
    cout << "*Root.left: " << root->left << endl;
    cout << "*Root.right: " << root->right << endl;
    return 0;
}


