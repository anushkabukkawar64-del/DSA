// #include <iostream>
// using namespace std;

// #define SIZE 5

// int q[SIZE];
// int front = -1, rear = -1;

// void enqueue(int value) {

//     if(front == -1) {
//         // First element
//         front = rear = 0;
//         q[rear] = value;
//     } else if((rear + 1) % SIZE == front) {
//         // Queue is full (circular check)
//         cout << "Queue Overflow\n";
//     } else {
//         rear = (rear + 1) % SIZE;
//         q[rear] = value;
//     }
// }

// void dequeue() {

//     if(front == -1 || front > rear) {
//         cout << "Queue Underflow\n";
//     } else {
//         cout << "Deleted: " << q[front] << endl;
//         front++;

//         // ✅ FIX: reset when queue becomes empty
//         if(front > rear) {
//             front = rear = -1;
//         }
//     }
// }

// void display() {

//     // ✅ FIX: handle empty case
//     if(front == -1) {
//         cout << "Queue is empty\n";
//         return;
//     }

//     if(front <= rear) {
//         for(int i = front; i <= rear; i++) {
//             cout << q[i] << " ";
//         }
//     } else {
//         for(int i = front; i < SIZE; i++) {
//             cout << q[i] << " ";
//         }
//         for(int i = 0; i <= rear; i++) {
//             cout << q[i] << " ";
//         }
//     }

//     cout << endl;
// }

// int main() {

//     enqueue(10);
//     enqueue(20);
//     enqueue(30);

//     display();

//     dequeue();

//     display();

//     return 0;
// }




#include <iostream>
using namespace std;


#define SIZE 5

int q[SIZE];
int front = -1, rear = -1;


void enqueue(int value ) {
    if((rear + 1) % SIZE == front) {
        cout << "Queue Overflow\n";
    } else {
        rear = (rear + 1) % SIZE;
        q[rear] = value;
        if(front == -1) {
            front = 0;
        }
    }
}

void dequeue() {
    if(front == -1) {
        cout << "Queue Underflow\n";
    } else {
        cout << "Deleted: " << q[front] << endl;
        front = (front + 1) % SIZE;
        if(front == (rear + 1) % SIZE) {
            front = rear = -1;
        }
    }
}

void display() {
    if(front == -1) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue elements: ";
    for(int i = front; i != rear; i = (i + 1) % SIZE) {
        cout << q[i] << " ";
    }
    cout << q[rear] << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}