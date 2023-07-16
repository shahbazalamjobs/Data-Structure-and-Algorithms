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
