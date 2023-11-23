#include <iostream>

// Maximum size of the queue
#define MAX_SIZE 100

using namespace std;

class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    // Function to add an element to the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }

        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    // Function to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    // Function to get the front element of the queue
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return arr[front];
    }

    // Function to get the rear element of the queue
    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return arr[rear];
    }
    
    void print() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            for (int i = front; i <= rear; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Creating a queue
    Queue myQueue;

    // Enqueue elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Display front and rear elements
    cout << "Front element: " << myQueue.getFront() << endl;
    cout << "Rear element: " << myQueue.getRear() << endl;

    // Dequeue an element
    myQueue.dequeue();

    // Display front and rear elements after dequeue
    cout << "Front element after dequeue: " << myQueue.getFront() << endl;
    cout << "Rear element after dequeue: " << myQueue.getRear() << endl;

    return 0;
}
