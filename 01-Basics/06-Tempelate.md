In C++, there are three main types of templates: function templates, class templates, and template specialization. Here's an explanation of each type along with an example code snippet for each:

1. Function Templates:
Function templates allow you to define a generic function that can be used with different data types.

```cpp
#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template<typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    float float1 = 3.14;
    float float2 = 2.71;

    // Call the maximum function with integers
    int maxInt = maximum(num1, num2);
    cout << "Maximum of " << num1 << " and " << num2 << " is: " << maxInt << endl;

    // Call the maximum function with floats
    float maxFloat = maximum(float1, float2);
    cout << "Maximum of " << float1 << " and " << float2 << " is: " << maxFloat << endl;

    return 0;
}
```

2. Class Templates:
Class templates allow you to define a generic class that can work with different data types. The template parameters can be used as the types for member variables, member functions, or even the base class.

```cpp
#include <iostream>

using namespace std;

template<typename T>
class MyContainer {
private:
    T data;

public:
    MyContainer(T value) {
        data = value;
    }

    void printData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    MyContainer<int> intContainer(10);
    intContainer.printData(); // Output: Data: 10

    MyContainer<string> stringContainer("Hello");
    stringContainer.printData(); // Output: Data: Hello

    return 0;
}
```

3. Template Specialization:
Template specialization allows you to provide a specialized implementation of a template for a specific type.

```cpp
#include <iostream>

using namespace std;

// Generic template function
template<typename T>
void printType(T value) {
    cout << "Generic type: " << value << endl;
}

// Specialization for int type
template<>
void printType<int>(int value) {
    cout << "Specialized type (int): " << value << endl;
}

int main() {
    printType("Hello"); // Output: Generic type: Hello
    printType(10);      // Output: Specialized type (int): 10

    return 0;
}
```

- In the above example, we define a generic `printType` function template that can handle any type. Then, we provide a specialization of the template specifically for `int` type. When the `printType` function is called with an `int` argument, the specialized version is invoked.

- These are the main types of templates in C++. Each type allows you to write generic code that can be used with different data types, enhancing code reusability and flexibility.
