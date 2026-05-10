// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int x = 25;
// //     int *p = &x;

// // cout << "Value of x: " << x << endl;
// // cout << "Address of x: " << &x << endl;
// // cout << "Value of p (address of x): " << p << endl;
// // cout << "Value pointed to by p: " << *p << endl;

// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node *next;
// };

// Node* head = NULL;

// //insert at beggining

// void insertBegin(int x) {
//     Node* newNode = new Node();
//     newNode->data = x;
//     newNode->next = head;
//     head = newNode;
// }

// // insert at end 
// void insertEnd(int x) {
//     Node* newNode = new Node();
//     newNode->data = x;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     } 

//         Node* temp = head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }

//     // display list

//     void displayList() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//             cout << "NULL";
//     }

//     int main() {
//         insertBegin(30);
//         insertBegin(20);
//         insertBegin(10);
//         insertEnd(40);
       
//         displayList();
//         return 0;
//     } 

// // Delete from beginning
// void deleteBegin() {
//     if (head == NULL) {
//         cout << "List is empty\n";
//         return;
//     }

//     Node* temp = head;
//     head = head->next;
//     delete temp;
// }

// // Delete from end
// void deleteEnd() {
//     if (head == NULL) {
//         cout << "List is empty\n";
//         return;
//     }

//     if (head->next == NULL) {
//         delete head;
//         head = NULL;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next->next != NULL) {
//         temp = temp->next;
//     }

//     delete temp->next;
//     temp->next = NULL;
// }


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

void insertBegin(Node*& head, int x) {
    Node* newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;
}

void display(Node* head) {
    Node* temp = head;
    cout << temp->data << " ";
    temp = temp->next;
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertBegin(head, 10);
    insertBegin(head, 20);
    insertBegin(head, 30);

    cout << "Doubly Linked List: ";
    display(head);

    return 0;
}