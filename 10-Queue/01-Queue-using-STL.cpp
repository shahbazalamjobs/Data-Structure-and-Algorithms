#include <iostream>
#include <queue>

int main() {
    // Creating a queue of integers
    std::queue<int> myQueue;

    // Pushing elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Displaying the front element
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Displaying the rear element
    std::cout << "Rear element: " << myQueue.back() << std::endl;

    // Pop the front element
    myQueue.pop();

    // Displaying the front element after pop
    std::cout << "Front element after pop: " << myQueue.front() << std::endl;

    // Displaying the size of the queue
    std::cout << "Size of the queue: " << myQueue.size() << std::endl;

    return 0;
}
