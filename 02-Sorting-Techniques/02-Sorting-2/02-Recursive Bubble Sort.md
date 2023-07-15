# Recursive Bubble Sort Algorithm
- Recursive Bubble Sort is a variant of the Bubble Sort algorithm that uses recursion to repeatedly swap adjacent elements until the array is sorted. 
- In each iteration, the largest element "bubbles" up to its correct position at the end of the array. The process is repeated recursively for the remaining unsorted portion of the array.

```cpp
#include <iostream>
using namespace std;

void bubbleSortRecursive(int arr[], int n) {
    // Base case: If there is only one element or the array is empty, it is already sorted
    if (n <= 1) {
        return;
    }

    // One pass of bubble sort
    for (int i = 0; i < n - 1; i++) {
        // Compare adjacent elements and swap if necessary
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursively call bubbleSortRecursive on the remaining unsorted portion
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    bubbleSortRecursive(arr, n);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

- In the code above, the `bubbleSortRecursive` function takes an array `arr` and the size `n` of the array. The base case of the recursion is when there is only one element or the array is empty, in which case the function returns. Otherwise, it performs one pass of the bubble sort algorithm by comparing adjacent elements and swapping them if they are in the wrong order.
- After the pass, the largest element is guaranteed to be at the end of the array. The function then recursively calls itself on the remaining unsorted portion (i.e., `n-1` elements) of the array. This process continues until the array is sorted.
- The `main` function demonstrates the usage of Recursive Bubble Sort by initializing an array, calling `bubbleSortRecursive` to sort the array, and printing the original and sorted arrays.


### Time Complexity:
- Recursive Bubble Sort has a time complexity of O(N^2) for the worst and average cases, where N is the size of the array.
- The total steps can be approximated as the sum of the first N natural numbers, which is (N * (N+1)) / 2.
- Ignoring lower-order terms and constant coefficients, the time complexity simplifies to O(N^2).

### Space Complexity:
- The space complexity of Recursive Bubble Sort is O(N) for auxiliary stack space.
- Each recursive call creates additional stack frames, consuming space proportional to the size of the array.
