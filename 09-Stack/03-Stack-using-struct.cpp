#include <iostream>
using namespace std; 

const int MAX_SIZE = 100; // Maximum size of the stack

// Define a struct for the stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Define a typedef for the stack
typedef struct Stack Stack;

/*

Or more shortly like:

typedef struct Stack {
    int arr[MAX_SIZE];
    int top;
} Stack;

In modern c++ we can directly declare struct variable like struct myNewStruct

*/

// Function to initialize the stack
void initialize(Stack &s) {
    s.top = -1; // Initialize top to -1 to indicate an empty stack
}

// Function to check if the stack is empty
bool isEmpty(const Stack &s) {
    return s.top == -1;
}

// Function to check if the stack is full
bool isFull(const Stack &s) {
    return s.top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack &s, int value) {
    if (isFull(s)) {
        cout << "Stack overflow! Cannot push more elements." << endl;
    } else {
        s.arr[++s.top] = value;
        cout << "Pushed: " << value << endl;
    }
}

// Function to pop an element from the stack
int pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Stack underflow! Cannot pop from an empty stack." << endl;
        return -1; // Return a sentinel value indicating an error
    } else {
        int poppedValue = s.arr[s.top--];
        cout << "Popped: " << poppedValue << endl;
        return poppedValue;
    }
}

int main() {
    // Declare a stack using the typedef
    Stack myStack;

    // Initialize the stack
    initialize(myStack);

    // Push some elements onto the stack
    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);

    // Pop elements from the stack
    pop(myStack);
    pop(myStack);
    pop(myStack);
    pop(myStack); // This should print an error message since the stack is empty

    return 0;
}
