# Recursive Insertion Sort
- Recursive insertion sort is a sorting algorithm that sorts an array in-place by dividing it into a sorted and an unsorted section.
- It works by recursively inserting elements from the unsorted section into their correct positions within the sorted section.
  
### Approach: 
In the iterative method, we did the following:

- Take an element from the unsorted array(using an outer loop).
- Place it in its corresponding position in the sorted part(using an inner loop).
- Shift the remaining elements accordingly.
- Now, in the recursive approach, we will just select the element recursively instead of using any loop. This is the only change we will do the recursive insertion sort algorithm and the rest of the part will be completely the same as it was in the case of iterative insertion sort.

### Implementation
```cpp
#include <iostream>
using namespace std;

void recursiveInsertionSort(int arr[], int n) {
    if (n <= 1)
        return;

    recursiveInsertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main() {
    int arr[] = {5, 2, 8, 12, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    recursiveInsertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

- In this implementation, the `recursiveInsertionSort` function takes an array `arr` and the number of elements `n` in the array as parameters. It first checks if the array size is 1 or less, in which case it is already considered sorted, and it simply returns.
- If the array has more than one element, it recursively calls `recursiveInsertionSort` on the first `n-1` elements, effectively sorting the initial part of the array.
- After the recursive call, the function considers the last element `arr[n-1]` and compares it with the elements in the sorted section from index `0` to `n-2`. It moves any element greater than the last element one position to the right until it finds the correct position for the last element.
- Finally, the sorted array is printed in the `main` function.
- The time complexity of recursive insertion sort is O(n^2), where n is the number of elements in the array.
- The space complexity is O(n) due to the recursive calls on the stack.
