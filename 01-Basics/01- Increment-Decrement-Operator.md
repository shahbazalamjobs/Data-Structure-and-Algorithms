

## Increment Decrement Operator
In C++, both `i++` and `++i` are increment operators used to increase the value of a variable `i` by 1. However, they differ in their behavior.

1. `i++` (post-increment): The post-increment operator `i++` increments the value of `i` but returns its original value before the increment. In other words, the value of `i` is incremented after the current expression is evaluated. Here's an example:

```cpp
int i = 5;
int result = i++; // result = 5, i = 6
```

In this example, the value of `i` is first assigned to `result` (5), and then `i` is incremented to 6.

2. `++i` (pre-increment): The pre-increment operator `++i` increments the value of `i` and returns the incremented value. In other words, the value of `i` is incremented before the current expression is evaluated. Here's an example:

```cpp
int i = 5;
int result = ++i; // result = 6, i = 6
```

In this example, `i` is incremented to 6, and then the incremented value of `i` is assigned to `result` (6).

Both `i++` and `++i` can be used in various contexts, such as assignments, comparisons, or as part of larger expressions. The choice between them depends on the desired behavior and the specific requirements of your program.
