#include <iostream>
using namespace std;

#define pass (void)0

class Node {
public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
};

class Tree {
public:
    Node* root = nullptr;

    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            Node* ptr = new Node;
            ptr->data = data;
            root = ptr;
        } else if (data < root->data) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }
        return root;
    }

    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << " -> ";
        inorder(root->right);
    }

    void search(Node* root, int data) {
        if (root == nullptr) {
            cout << "Not found: " << data << endl;
        } else if (data == root->data) {
            cout << "Found: " << data << endl;
        } else if (data < root->data) {
            search(root->left, data);
        } else {
            search(root->right, data);
        }
    }

Node* deletion(Node* root, int data) {
        if (root == nullptr) {
            return nullptr;
        } else if (data > root->data) {
            root->right = deletion(root->right, data);
        } else if ( data < root->data) {
            root->left = deletion(root->left, data);
        } else if (data == root->data) {
            // everything start going from here;
            if (root->left != nullptr && root->right != nullptr) {
                // this is for both child;
                Node* temp = root->right;
                while (temp->left != nullptr) {
                    temp = temp->left;
                }
                root->data = temp->data;
                root->right = deletion(root->right, temp->data);
            } else if (root->left == nullptr || root->right == nullptr) {
                // last two conditions
                if (root->left == nullptr && root->right != nullptr) {
                    // this covers right child
                    Node* temp = new Node;
                    temp->data = root->right->data;
                    temp->left = root->right->left;
                    temp->right = root->right->right;
                    return temp;
                } else if (root->left != nullptr && root->right == nullptr) {
                    // this covers left child
                    Node* temp = new Node;
                    temp->data = root->left->data;
                    temp->right = root->left->right;
                    temp->left = root->left->left;
                    return temp;
                } else if (root->left == nullptr && root->right == nullptr) {
                    delete root;
                    return nullptr;
                }
            }
        } else {
            cout << "Counl'd not find root.data " << endl;
        }
        return root;
    }
};

int main() {
    Tree t1;
    t1.root = t1.insert(t1.root, 90);
    t1.root = t1.insert(t1.root, 70);
    t1.root = t1.insert(t1.root, 78);
    t1.root = t1.insert(t1.root, 10);
    t1.root = t1.insert(t1.root, 9);
    t1.root = t1.insert(t1.root, 100);
    t1.root = t1.insert(t1.root, 120);

    cout << "Before delete: ";
    t1.inorder(t1.root);
    cout << endl;

    t1.search(t1.root, 70);
    t1.root = t1.deletion(t1.root, 9);

    cout << "After delete:  ";
    t1.inorder(t1.root);
    cout << endl;

    return 0;
}
