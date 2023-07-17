# Standard Template Library (STL) in C++:

1. **STL**: The Standard Template Library (STL) is a library in C++ that provides a collection of reusable data structures and algorithms.
2. **Containers**: STL provides various container classes like vectors, lists, queues, stacks, etc., that store and organize data efficiently.
3. **Algorithms**: STL includes a wide range of algorithms for sorting, searching, manipulating, and working with container elements.
4. **Iterators**: STL iterators are used to traverse and access elements of containers in a generic way, similar to pointers.
5. **Generic Programming**: STL is based on the principle of generic programming, allowing algorithms and data structures to work with different types of elements.
7. **Efficiency**: STL containers and algorithms are optimized for performance and memory usage.
8. **Modularity**: STL components are designed to work together seamlessly, allowing easy integration and combination of containers, algorithms, and iterators.
9. **Header Files**: STL components are implemented as templates and provided in standard header files like `<vector>`, `<list>`, `<algorithm>`, etc.
10. **Standardization**: STL is a part of the C++ Standard Library and follows the C++ language standards.

By utilizing the STL, C++ programmers can leverage powerful and efficient data structures and algorithms, leading to more maintainable and reusable code.

**********

- **Capacity**:
  - The capacity-related operations provide information about the vector's size and its reserved memory space. Some of the commonly used capacity functions are:
    - `size()`: Returns the number of elements in the vector.
    - `capacity()`: Returns the maximum number of elements the vector can hold before reallocating memory.
    - `empty()`: Checks if the vector is empty.

- **Modifiers**:
  - Modifiers allow you to modify the content of the vector. In this example, we use the `push_back()` function to add elements to the end of the vector. Other commonly used modifiers include:
    - `push_front()`: Adds an element to the beginning of the vector.
    - `pop_back()`: Removes the last element from the vector.
    - `insert()`: Inserts an element at a specified position.
    - `erase()`: Removes an element from a specified position or a range of elements.
    - `clear()`: Removes all elements from the vector.

- **Element Access**:
  - The element access operations provide ways to access the elements stored in the vector. In this example, we demonstrate two methods:
    - Indexing with `[]`: Allows you to access elements using the index.
    - Iterators: We use a `const_iterator` to iterate over the vector's elements. Other common iterator types are `iterator` and `reverse_iterator`.

**********

## Vectors

- `vector` is a container in the C++ Standard Template Library (STL) that represents a dynamic array.
- It provides dynamic resizing, automatically adjusting its capacity as elements are added or removed.
- Elements in a `vector` are stored in contiguous memory locations.
- `vector` supports random access and provides iterators for traversal.
- It allows efficient insertion and deletion at the end of the sequence.
- `vector` provides constant-time access to individual elements.
- It can be used when the number of elements is not known beforehand and may vary.
- `vector` is suitable for scenarios that require dynamic resizing and efficient random access.
- It offers a variety of member functions for modifying, accessing, and traversing elements.
- The `<vector>` header file should be included to use `vector` in C++ STL.

```cpp
#include <iostream>
#include <vector>

int main() {
    // Declaration and Initialization
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Iterators
    std::cout << "Vector elements (using iterators): ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Reverse Iterators
    std::cout << "Vector elements in reverse (using reverse iterators): ";
    for (auto rit = myVector.rbegin(); rit != myVector.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Capacity
    std::cout << "Size: " << myVector.size() << std::endl;
    std::cout << "Max Size: " << myVector.max_size() << std::endl;
    std::cout << "Capacity: " << myVector.capacity() << std::endl;

    // Modifiers
    myVector.push_back(6);                      // Add an element at the end
    myVector.insert(myVector.begin() + 2, 10);  // Insert an element at index 2
    myVector.erase(myVector.begin() + 3);       // Erase an element at index 3
    myVector.resize(7);                         // Resize the vector to contain 7 elements
    myVector.pop_back();                        // Remove the last element

    // Element Access
    if (!myVector.empty()) {
        std::cout << "First element: " << myVector.front() << std::endl;
        std::cout << "Last element: " << myVector.back() << std::endl;
        std::cout << "Element at index 2: " << myVector.at(2) << std::endl;
        std::cout << "Element at index 4: " << myVector[4] << std::endl;

        // Direct access to the underlying array (requires C++11 or later)
        int* data = myVector.data();
        std::cout << "Element at index 1 (using data()): " << data[1] << std::endl;
    }

    // Clear the vector
    myVector.clear();

    // Check if the vector is empty
    std::cout << "Vector is empty: " << (myVector.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
```

**********

## Array

- `array` is a container in the C++ STL.
- It represents a fixed-size sequence of elements.
- Elements are stored in contiguous memory locations.
- The size of the `array` is fixed and determined at compile-time.
- It provides efficient element access with constant-time complexity.
- It supports random access and provides iterators for traversal.
- `array` does not allow resizing or changing the number of elements.
- It is a lightweight container with no dynamic memory allocation overhead.
- The `<array>` header file should be included to use `array` in C++ STL.
- It is a suitable choice when the number of elements is known and fixed.

```cpp
#include <iostream>
#include <array>

int main() {
    // Create an array of integers with size 5
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    // Using iterators
    std::cout << "Using iterators:" << std::endl;
    std::cout << "Forward traversal: ";
    for (auto it = myArray.begin(); it != myArray.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse traversal: ";
    for (auto it = myArray.rbegin(); it != myArray.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Capacity
    std::cout << "Capacity functions:" << std::endl;
    std::cout << "Size: " << myArray.size() << std::endl;
    std::cout << "Max size: " << myArray.max_size() << std::endl;
    std::cout << "Empty: " << (myArray.empty() ? "true" : "false") << std::endl;

    // Modifiers
    std::cout << "Modifiers:" << std::endl;
    myArray.fill(0);  // Fill the array with a value

    myArray[2] = 10;  // Modify an element using index

    std::array<int, 5> anotherArray = {6, 7, 8, 9, 10};
    myArray.swap(anotherArray);  // Swap the contents of two arrays

    // Element access
    std::cout << "Element access:" << std::endl;
    std::cout << "First element: " << myArray.front() << std::endl;
    std::cout << "Last element: " << myArray.back() << std::endl;
    std::cout << "Element at index 2: " << myArray.at(2) << std::endl;

    std::cout << "Array elements: ";
    for (const auto& element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

Output:
```
Using iterators:
Forward traversal: 1 2 3 4 5 
Reverse traversal: 5 4 3 2 1 
Capacity functions:
Size: 5
Max size: 5
Empty: false
Modifiers:
Element access:
First element: 6
Last element: 10
Element at index 2: 0
Array elements: 6 7 0 9 10
```

**********

## Deque

- `deque` is a container in the C++ STL.
- It stands for "double-ended queue."
- It allows efficient insertion and deletion at both ends.
- Elements in a `deque` are not required to be stored in contiguous memory.
- It supports random access and provides iterators for traversal.
- Size of a `deque` can dynamically grow or shrink.
- It provides constant-time access to both the front and back elements.
- Insertion and deletion at both ends have constant time complexity.
- It supports insertion and deletion in the middle of the sequence.
- The `<deque>` header file should be included to use `deque`.

```cpp
#include <iostream>
#include <deque>

int main() {
    // Create a deque of integers
    std::deque<int> myDeque;

    // Push elements to the back of the deque
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);

    // Push elements to the front of the deque
    myDeque.push_front(0);
    myDeque.push_front(-1);

    // Using iterators
    std::cout << "Using iterators:" << std::endl;
    std::cout << "Forward traversal: ";
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse traversal: ";
    for (auto it = myDeque.rbegin(); it != myDeque.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Capacity
    std::cout << "Capacity functions:" << std::endl;
    std::cout << "Size: " << myDeque.size() << std::endl;
    std::cout << "Max size: " << myDeque.max_size() << std::endl;
    std::cout << "Empty: " << (myDeque.empty() ? "true" : "false") << std::endl;

    // Modifiers
    std::cout << "Modifiers:" << std::endl;
    myDeque.pop_front();  // Remove the first element
    myDeque.pop_back();   // Remove the last element

    myDeque.push_front(-2);  // Insert element at the front
    myDeque.push_back(4);    // Insert element at the back

    myDeque.insert(myDeque.begin() + 2, 99);  // Insert element at position 2

    // Element access
    std::cout << "Element access:" << std::endl;
    std::cout << "First element: " << myDeque.front() << std::endl;
    std::cout << "Last element: " << myDeque.back() << std::endl;
    std::cout << "Element at index 2: " << myDeque.at(2) << std::endl;

    std::cout << "Deque elements: ";
    for (const auto& element : myDeque) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

Output:
```
Using iterators:
Forward traversal: -2 -1 0 1 2 99 3 4 
Reverse traversal: 4 3 99 2 1 0 -1 -2 
Capacity functions:
Size: 8
Max size: 4611686018427387903
Empty: false
Modifiers:
Element access:
First element: -2
Last element: 4
Element at index 2: 0
Deque elements: -2 -1 0 1 2 99 3 4
```


**********

 ## list

 - `list` is a container in the C++ Standard Template Library (STL) that represents a doubly-linked list.
- It provides efficient insertion and deletion operations at both ends and in the middle of the list.
- Elements in a `list` are stored in non-contiguous nodes with each node containing a value and pointers to the previous and next nodes.
- `list` does not support random access and indexing like arrays or vectors.
- It supports bidirectional iterators, allowing traversal in both forward and reverse directions.
- `list` provides constant-time complexity for insertion and deletion operations.
- It does not have a fixed size and dynamically grows as elements are added.
- `list` is suitable for scenarios that require frequent insertion and deletion operations, especially in the middle of the sequence.
- It should be used when the order of elements and efficient modification are more important than random access and indexing.
- `list` is not suitable when frequent random access or direct element access is required, as it has higher memory overhead and slower access compared to arrays or vectors.

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Insert elements at the back using push_back()
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Insert elements at the front using push_front()
    myList.push_front(5);
    myList.push_front(2);

    // Iterate over the list using iterators
    cout << "List elements: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Access the front and back elements
    cout << "Front element: " << myList.front() << endl;
    cout << "Back element: " << myList.back() << endl;

    // Check if the list is empty
    cout << "Is list empty? " << (myList.empty() ? "Yes" : "No") << endl;

    // Get the size of the list
    cout << "List size: " << myList.size() << endl;

    // Insert an element at a specific position
    auto it = myList.begin();
    ++it; // Move iterator to the second element
    myList.insert(it, 15);

    // Remove an element from the list
    myList.pop_back();

    // Erase an element at a specific position
    it = myList.begin();
    ++it; // Move iterator to the second element
    myList.erase(it);

    // Modify an element
    it = myList.begin();
    ++it; // Move iterator to the second element
    *it = 25;

    // Print the modified list
    cout << "Modified list: ";
    for (int elem : myList) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
```

Output:
```
List elements: 2 5 10 20 30 
Front element: 2
Back element: 30
Is list empty? No
List size: 5
Modified list: 2 25 10 20
```
**********

## Stack

- Stack in C++ STL is a container adapter that provides a LIFO (Last-In, First-Out) data structure.
- It is implemented as an adapter over other container classes like `vector`, `deque`, or `list`.
- Elements are inserted and removed from the top of the stack.
- Important operations include `push()` to insert an element, `pop()` to remove the top element, and `top()` to access the top element without removing it.
- It is used when a Last-In, First-Out behavior is required, such as function call stack, expression evaluation, backtracking algorithms, etc.
- It provides constant-time complexity for insertion and removal of elements at the top.
- Iterators are not supported in the stack container.

```cpp
#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Get the top element of the stack
    cout << "Top element: " << myStack.top() << endl;

    // Check if the stack is empty
    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    // Get the size of the stack
    cout << "Stack size: " << myStack.size() << endl;

    // Pop elements from the stack
    myStack.pop();

    // Modify the top element
    myStack.top() = 25;

    // Print the elements of the stack
    cout << "Stack elements: ";
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
```

Output:
```
Top element: 30
Is stack empty? No
Stack size: 3
Stack elements: 25 20 10
```

**********
## Queue

- Queue in C++ STL is a container adapter that provides a FIFO (First-In, First-Out) data structure.
- It is implemented as an adapter over other container classes like `deque` or `list`.
- Elements are inserted at the back of the queue and removed from the front.
- Important operations include `push()` to insert an element, `pop()` to remove the front element, and `front()` to access the front element.
- It is used when a First-In, First-Out behavior is required, such as task scheduling, breadth-first search, message queues, etc.
- It provides constant-time complexity for insertion and removal of elements at the front.
- Iterators are not supported in the queue container.

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a priority queue of integers
    priority_queue<int> myQueue;

    // Push elements into the priority queue
    myQueue.push(30);
    myQueue.push(10);
    myQueue.push(20);

    // Get the top element of the priority queue
    cout << "Top element: " << myQueue.top() << endl;

    // Check if the priority queue is empty
    cout << "Is priority queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    // Get the size of the priority queue
    cout << "Priority queue size: " << myQueue.size() << endl;

    // Pop elements from the priority queue
    myQueue.pop();

    // Print the elements of the priority queue
    cout << "Priority queue elements: ";
    while (!myQueue.empty()) {
        cout << myQueue.top() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}
```

Output:
```
Top element: 30
Is priority queue empty? No
Priority queue size: 3
Priority queue elements: 20 10
```

**********

## Priority Queue

- Priority Queue in C++ STL is a container adapter that provides a priority-based data structure.
- It is implemented as an adapter over other container classes like `vector` or `deque`.
- Elements in a priority queue are ordered based on a specified comparison function or operator.
- The element with the highest priority (according to the specified comparison) is always at the front.
- Important operations include `push()` to insert an element, `pop()` to remove the highest priority element, and `top()` to access the highest priority element without removing it.
- It is used when elements need to be processed in a specific order based on priority, such as task scheduling, event handling, Dijkstra's algorithm, etc.
- It provides logarithmic-time complexity for insertion and removal of elements.
- Iterators are not supported in the priority queue container.

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a priority queue of integers
    priority_queue<int> myQueue;

    // Push elements into the priority queue
    myQueue.push(30);
    myQueue.push(10);
    myQueue.push(20);

    // Get the top element of the priority queue
    cout << "Top element: " << myQueue.top() << endl;

    // Check if the priority queue is empty
    cout << "Is priority queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    // Get the size of the priority queue
    cout << "Priority queue size: " << myQueue.size() << endl;

    // Pop elements from the priority queue
    myQueue.pop();

    // Print the elements of the priority queue
    cout << "Priority queue elements: ";
    while (!myQueue.empty()) {
        cout << myQueue.top() << " ";
        myQueue.pop();
    }
    cout << endl;

    return 0;
}
```

Output:
```
Top element: 30
Is priority queue empty? No
Priority queue size: 3
Priority queue elements: 20 10
```

**********

## Set

- Set in C++ STL is an associative container that stores unique elements in a sorted order.
- It is implemented as a balanced binary search tree (usually Red-Black Tree) to maintain the elements in sorted order.
- Duplicate elements are not allowed in a set.
- Important operations include `insert()` to insert elements, `erase()` to remove elements, and `find()` to search for elements.
- It is used when you need to store a collection of unique elements in sorted order and perform efficient search, insertion, and removal operations.
- It provides logarithmic-time complexity for insertion, removal, and search operations.
- Iterators are supported, allowing traversal and modification of elements.
- Set supports efficient range-based operations and provides useful member functions like `size()`, `empty()`, and `clear()` for managing the set.
- Set is commonly used for tasks such as maintaining a sorted collection of unique values, implementing set operations (union, intersection, difference), and solving problems where uniqueness and order matter.
```cpp
#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);

    // Check if an element is present in the set
    if (mySet.count(30) != 0)
        cout << "Element 30 is present in the set" << endl;
    else
        cout << "Element 30 is not present in the set" << endl;

    // Get the size of the set
    cout << "Set size: " << mySet.size() << endl;

    // Iterate over the set using iterators
    cout << "Set elements: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Erase an element from the set
    mySet.erase(20);

    // Check if the set is empty
    cout << "Is set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // Clear the set
    mySet.clear();

    // Check the size of the set after clearing
    cout << "Set size after clearing: " << mySet.size() << endl;

    return 0;
}
```

Output:
```
Element 30 is present in the set
Set size: 4
Set elements: 10 20 30 40
Is set empty? No
Set size after clearing: 0
```

**********

## Map

- Map in C++ STL is an associative container that stores elements as key-value pairs.
- It is implemented as a balanced binary search tree (usually Red-Black Tree) to maintain the elements in sorted order based on the keys.
- Keys in a map are unique, and each key is associated with a value.
- Important operations include `insert()` to insert key-value pairs, `erase()` to remove elements, and `find()` to search for elements based on keys.
- It is used when fast access to elements based on keys is required, such as dictionary-like data structures, phonebook applications, symbol tables, etc.
- It provides logarithmic-time complexity for insertion, removal, and search operations.
- Iterators are supported, allowing traversal and modification of elements.
- Map supports efficient range-based operations and provides useful member functions like `size()`, `empty()`, and `clear()` for managing the map.
- Map is commonly used when key-value associations and ordered storage are essential.

```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a map of strings and integers
    map<string, int> myMap;

    // Insert elements into the map
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    myMap["Charlie"] = 35;

    // Check if a key is present in the map
    if (myMap.count("Charlie") != 0)
        cout << "Key 'Charlie' is present in the map" << endl;
    else
        cout << "Key 'Charlie' is not present in the map" << endl;

    // Get the size of the map
    cout << "Map size: " << myMap.size() << endl;

    // Iterate over the map using iterators
    cout << "Map elements: ";
    for (auto it = myMap.begin(); it != myMap.end(); ++it)
        cout << it->first << ":" << it->second << " ";
    cout << endl;

    // Access the value associated with a key
    cout << "Value associated with 'Alice': " << myMap["Alice"] << endl;

    // Erase an element from the map
    myMap.erase("Bob");

    // Check if the map is empty
    cout << "Is map empty? " << (myMap.empty() ? "Yes" : "No") << endl;

    // Clear the map
    myMap.clear();

    // Check the size of the map after clearing
    cout << "Map size after clearing: " << myMap.size() << endl;

    return 0;
}
```

Output:
```
Key 'Charlie' is present in the map
Map size: 3
Map elements: Alice:25 Bob:30 Charlie:35 
Value associated with 'Alice': 25
Is map empty? No
Map size after clearing: 0
```

**********
## STL Algorithm 

## Algorithm

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3, 7, 4, 6};

    // Sorting the vector in ascending order
    std::sort(numbers.begin(), numbers.end());
    std::cout << "Sorted numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Finding the minimum and maximum elements
    auto minNum = std::min_element(numbers.begin(), numbers.end());
    auto maxNum = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Minimum element: " << *minNum << std::endl;
    std::cout << "Maximum element: " << *maxNum << std::endl;

    // Reversing the vector
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "Reversed numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Checking if the vector is sorted
    bool isSorted = std::is_sorted(numbers.begin(), numbers.end());
    std::cout << "Is the vector sorted? " << (isSorted ? "Yes" : "No") << std::endl;

    // Counting the occurrences of a specific element
    int count = std::count(numbers.begin(), numbers.end(), 5);
    std::cout << "Number of occurrences of 5: " << count << std::endl;

    // Removing duplicates from the vector
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    std::cout << "Vector without duplicates: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Transforming elements in the vector
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int num) {
        return num * 2;
    });
    std::cout << "Doubled numbers: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Checking if all elements satisfy a condition
    bool allEven = std::all_of(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });
    std::cout << "Are all elements even? " << (allEven ? "Yes" : "No") << std::endl;

    // Finding the first element that matches a condition
    auto firstEven = std::find_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });
    if (firstEven != numbers.end()) {
        std::cout << "First even number: " << *firstEven << std::endl;
    } else {
        std::cout << "No even numbers found" << std::endl;
    }

    // Accumulating the sum of elements
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of all elements: " << sum << std::endl;

    return 0;
}
```

Output:
```
Sorted numbers: 1 2 3 4 5 6 7 8 9 
Minimum element: 1
Maximum element: 9
Reversed numbers: 9 8 7 6 5 4 3 2 1 
Is the vector sorted? No
Number of occurrences of 5: 1
Vector without duplicates: 9 8 7 6 5 4 3 2 1
Doubled numbers: 18 16 14 12 10 8 6 4 2
Are all elements even? Yes
First even number: 18
Sum of all elements: 90
```

**********
