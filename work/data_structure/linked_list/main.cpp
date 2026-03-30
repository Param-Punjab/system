#include <cstdio>
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

};

class LinkedList {
public:
    Node* root = nullptr;

    void insert(int data) {
        Node* new_node = new Node;
        if (root == nullptr) {
            (*new_node).data = data;
            (*new_node).next = nullptr;
            root = new_node;
            cout << "Insertion Success Full: " << data << endl;
        } else {
            Node* last_node = got_end();
            (*new_node).data = data;
            (*last_node).next = new_node;
            (*new_node).next = nullptr;
            cout << "Insertion Success Full: " << data << endl;
        }
    }

    Node* got_end() {
        Node* ptr = root;
        while((*ptr).next != nullptr) {
            ptr = (*ptr).next;
        }
        return ptr;
    }

    void print() {
        Node* ptr = root;
        if (ptr == nullptr) {
            cout << "root -> nullptr" << endl;
        }
        else {
            cout << "root -> ";
            while (ptr != nullptr) {
                cout << (*ptr).data << " -> ";
                ptr = (*ptr).next;
            }
            cout << "nullptr" << endl;
        }
    }

    void n_delete(int data) {
        Node* ptr = root;
        Node* pre_ptr = root;
        while (ptr != nullptr) {
            if ((*ptr).data == data) {
                (*pre_ptr).next = (*ptr).next;
                cout << "Node successfully Deleted" << endl;
                return;
            } else {
                pre_ptr = ptr;
                ptr = (*ptr).next;
            }
        }
        cout << "Couldn't find data: " << data << endl;
    }

    void search(int data) {
        Node* ptr = root;
        int count = 0;
        while( ptr != nullptr ) {
            count++;
            if( (*ptr).data == data) {
                cout << "Found! Data: " << data << endl;
                cout << "Index: " << count-1 << endl;
                cout << "Iteration: " << count << endl;
                return;
            } else {
                ptr = (*ptr).next;
            }
        }
        cout << "Data not found" << endl;
    }

};

int main() {
    LinkedList a1;
    a1.insert(01);
    a1.insert(02);
    a1.insert(03);
    a1.print();
    a1.insert(04);
    a1.print();
    a1.n_delete(03);
    a1.print();
    a1.search(03);
    a1.search(04);

    return 0;
}
