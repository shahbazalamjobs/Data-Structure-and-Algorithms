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
