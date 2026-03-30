#include <iostream>
using namespace std;

int count = 0;

class node {
	public:
	int data;
	node* next;

    node() {
        count += 1;
    }

    void display() {
        cout << "This function display available nodes" << endl;

    }
};

int main() {
    node* root = new node;
    node* node_1 = new node;
    node* node_2 = new node;
    node* node_3 = new node;

    (*root).data = 00; (*root).next = node_1;
    (*node_1).data = 01; (*node_1).next = node_2;
    (*node_2).data = 02; (*node_2).next = node_3;
    (*node_3).data = 03; (*node_3).next = nullptr;

    cout << "Number of nodes: " << count << endl;
	return 0;
}
