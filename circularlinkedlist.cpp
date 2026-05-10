#include <iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Global pointer to last node
Node* last = NULL;


//  Display Circular Linked List
void display() {

    if (last == NULL) {
        cout << "List is empty\n";
        return;
    } 
    