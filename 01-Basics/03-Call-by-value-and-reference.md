# Call by Value and Call by Reference

In C++, there are two ways to pass arguments to functions: call by value and call by reference. Let's understand each of them:

1. Call by Value:
When a function is called by value, a copy of the argument is passed to the function. Any modifications made to the parameter inside the function will not affect the original argument passed to the function.

Example:
```cpp
#include <iostream>
using namespace std;

void increment(int num) {
    num++;  // Modifying the parameter
}

int main() {
    int x = 5;
    increment(x);  // Calling the function by value
    cout << "x: " << x << endl;  // Output: x: 5 (unchanged)
    return 0;
}
```
In the above example, the `increment` function takes an argument `num` by value. Inside the function, the `num` parameter is incremented, but it does not affect the original `x` variable in the `main` function.

2. Call by Reference:
When a function is called by reference, a reference to the argument is passed to the function. Any modifications made to the parameter inside the function will affect the original argument passed to the function.

Example:
```cpp
#include <iostream>
using namespace std;

void increment(int& num) {
    num++;  // Modifying the parameter
}

int main() {
    int x = 5;
    increment(x);  // Calling the function by reference
    cout << "x: " << x << endl;  // Output: x: 6 (modified)
    return 0;
}
```
In the above example, the `increment` function takes an argument `num` by reference using the `&` symbol. Inside the function, the `num` parameter is incremented, which directly modifies the original `x` variable in the `main` function.

Call by reference allows functions to modify the original variables passed to them, while call by value only operates on a copy of the variable. Call by reference is useful when you want to modify the original variable or avoid the overhead of making a copy of large objects or arrays.

**********

### Differences between call by value and call by reference in C++:

|              | Call by Value | Call by Reference |
|--------------|---------------|-------------------|
| Parameter Passing | A copy of the argument is passed to the function. | A reference to the argument is passed to the function. |
| Effect on Original Argument | Modifications made to the parameter do not affect the original argument. | Modifications made to the parameter directly affect the original argument. |
| Memory Overhead | Additional memory is required to store the copied argument. | No additional memory is required as it operates on the original argument. |
| Performance | Can have performance overhead for large objects or complex data structures due to copying. | Generally more efficient, especially for large objects, as it avoids copying. |
| Syntax | Pass by value is the default behavior in C++. | Pass by reference is denoted by using `&` in the function parameter. |
| Usage | Suitable for small and simple data types or when modification of the original argument is not desired. | Suitable when modification of the original argument is required or to avoid the overhead of copying large objects. |

- In summary, call by value creates a copy of the argument and operates on the copy within the function, while call by reference directly operates on the original argument.
- Call by value is the default behavior in C++, while call by reference requires using the `&` symbol in the function parameter.
- Call by reference is typically more efficient and useful when modification of the original argument is required or when dealing with large objects or data structures.
