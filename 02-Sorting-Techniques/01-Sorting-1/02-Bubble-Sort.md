# Bubble Sort

```cpp
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52


Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5
```

Bubble sort approach:
```cpp
1. The bubble sort algorithm repeatedly compares adjacent elements in the array.
2. If the current element is greater than the next element, they are swapped.
3. This process continues, gradually moving the largest element to the end of the array in each pass.
4. After each pass, the largest element in the unsorted part is in its correct position.
5. The algorithm repeats these steps until the entire array is sorted.
6. The provided code demonstrates this algorithm by sorting an example array in ascending order.
7. The sorted array is printed for verification.
```

![image](https://github.com/shahbazalamjobs/Data-Structure-and-Algorithms/assets/125631878/d2d9a26d-d67c-4e20-a3b0-0c7e60d81392)


Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

```cpp
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Last i elements are already in place, so no need to check them
        for (int j = 0; j < size - i - 1; ++j) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap them if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, size);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

In the `bubbleSort` function, the outer loop iterates from the beginning of the array to the second-to-last element. This loop represents the number of passes required to sort the array.

The inner loop compares adjacent elements in each pass. If the current element is greater than the next element, they are swapped. This ensures that the largest element "bubbles" up to the end of the array in each pass.

After each pass, the largest element in the unsorted part of the array moves to its correct sorted position at the end. This process continues until the entire array is sorted.

In the `main` function, an example array `{64, 34, 25, 12, 22, 11, 90}` is used. The size of the array is calculated, and then the original and sorted arrays are printed for verification.

The output of the program will be:
```cpp
Original array: 64 34 25 12 22 11 90
Sorted array: 11 12 22 25 34 64 90
```

