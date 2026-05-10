#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int arr[MAX];
    int top;

    public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }
        void pop() {
            if (top < 0) {
                cout << "Stack Underflow\n";
                return;
            }
            cout << arr[top--] << " popped from stack\n";
        }
        void peek() {
            if (top < 0) {
                cout << "Stack is empty\n";
                return;
            }
            cout << "Top element is: " << arr[top] << endl;
        }
            void display() {
                if (top == -1) {
                    cout << "Stack is empty\n";
                    return;
                }
                cout << "Stack elements: ";
                for (int i = 0; i <= top; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
};

int main() {
        Stack s;

        s.push(10);
        s.push(20);
        s.push(30);

        s.display();

        s.peek();

        s.pop();
        s.display();

        return 0;

    }