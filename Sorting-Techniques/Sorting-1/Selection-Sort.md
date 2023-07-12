# Selection Sort

```cpp
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1, 2, 3, 4, 5
```

Selection sort approach:
```cpp

1. The selection sort algorithm repeatedly finds the minimum element from the unsorted part of the array.
2. It starts with the first element and searches for a smaller element in the remaining unsorted part.
3. When a smaller element is found, it is swapped with the current element.
4. This process continues, gradually reducing the unsorted part until the entire array is sorted.
5. The algorithm repeats these steps until the second-to-last element, as the last element is already in its correct position.
6. The provided code demonstrates this algorithm by sorting an example array in ascending order.
7. The sorted array is printed for verification.

Overall, selection sort selects the minimum element from the unsorted part and places it in its correct position in each iteration, resulting in a sorted array.

```

Selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of an array and swapping it with the element at the beginning of the unsorted part. This process is repeated until the entire array is sorted.

Here's an explanation of the selection sort algorithm implemented in C++:

```cpp
#include <iostream>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element in the unsorted part
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    selectionSort(arr, size);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

```

- In the selectionSort function, the outer loop iterates over the array from the beginning to the second-to-last element. For each iteration, it assumes the current element is the minimum and searches for a smaller element in the unsorted part of the array.

- The inner loop starts from i+1 and compares each subsequent element with the assumed minimum. If a smaller element is found, the index of that element is stored in minIndex.

- After finding the minimum element, a swap is performed between the current element (arr[i]) and the minimum element (arr[minIndex]). This places the minimum element in its correct sorted position at the beginning of the unsorted part.

- The process continues until the entire array is sorted, resulting in the array being sorted in ascending order.

- In the main function, an example array {64, 25, 12, 22, 11} is used. The size of the array is calculated, and then the original and sorted arrays are printed for verification.


The output of the program will be:

```cpp
Original array: 64 25 12 22 11
Sorted array: 11 12 22 25 64
```
**********
