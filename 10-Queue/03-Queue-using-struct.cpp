#include <iostream>
using namespace std;

// Define the maximum size of the queue
#define MAX_SIZE 10

// Define the queue structure
typedef struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
} Queue;

// Function to initialize an empty queue
void initializeQueue(Queue* queue) {
    queue->front = queue->rear = -1;
}

// Function to check if the queue is empty
bool isEmpty(Queue* queue) {
    return (queue->front == -1);
}

// Function to check if the queue is full
bool isFull(Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to enqueue a new element
void enqueue(Queue* queue, int data) {
    if (isFull(queue)) {
        cout << "Queue is full. Cannot enqueue." << endl;
        return;
    }

    // If the queue is empty, set the front pointer
    if (isEmpty(queue)) {
        queue->front = 0;
    }

    // Increment the rear pointer and add the new element
    queue->arr[++queue->rear] = data;

    cout << "Enqueued: " << data << endl;
}

// Function to dequeue an element
void dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return;
    }

    // If after dequeue the queue becomes empty, reset the front and rear pointers
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        // Otherwise, increment the front pointer
        ++queue->front;
    }

    cout << "Dequeued: " << queue->arr[queue->front - 1] << endl;
}

// Function to display the elements of the queue
void displayQueue(Queue* queue) {
    if (isEmpty(queue)) {
        cout << "Queue is empty." << endl;
        return;
    }

    // Traverse the queue and print each element
    for (int i = queue->front; i <= queue->rear; ++i) {
        cout << queue->arr[i] << " ";
    }
    cout << endl;
}

// Main function to test the queue implementation
int main() {
    Queue myQueue;
    initializeQueue(&myQueue);

    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);
    enqueue(&myQueue, 40);
    enqueue(&myQueue, 60);

    displayQueue(&myQueue);

    dequeue(&myQueue);
    displayQueue(&myQueue);

    return 0;
}
