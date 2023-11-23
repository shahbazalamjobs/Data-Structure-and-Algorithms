#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(int value) {
        if (top < MAX_SIZE - 1) {
            arr[++top] = value;
            cout << "Pushed " << value << " onto the stack." << endl;
        } else {
            cout << "Stack overflow! Cannot push " << value << "." << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            cout << "Popped " << arr[top--] << " from the stack." << endl;
        } else {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
        }
    }

    int peek() const {
        if (top >= 0) {
            return arr[top];
        } else {
            cerr << "Stack is empty." << endl;
            return -1; // Return a sentinel value for an empty stack
        }
    }

    bool isEmpty() const {
        return top == -1;
    }
};

int main() {
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    cout << "Top element: " << myStack.peek() << endl;

    myStack.pop();

    if (myStack.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}
