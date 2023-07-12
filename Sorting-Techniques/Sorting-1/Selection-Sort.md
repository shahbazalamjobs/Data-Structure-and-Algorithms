# Selection Sort

### Selection sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted part of an array and swapping it with the element at the beginning of the unsorted part. This process is repeated until the entire array is sorted.

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

In the selectionSort function, the outer loop iterates over the array from the beginning to the second-to-last element. For each iteration, it assumes the current element is the minimum and searches for a smaller element in the unsorted part of the array.

The inner loop starts from i+1 and compares each subsequent element with the assumed minimum. If a smaller element is found, the index of that element is stored in minIndex.

After finding the minimum element, a swap is performed between the current element (arr[i]) and the minimum element (arr[minIndex]). This places the minimum element in its correct sorted position at the beginning of the unsorted part.

The process continues until the entire array is sorted, resulting in the array being sorted in ascending order.

In the main function, an example array {64, 25, 12, 22, 11} is used. The size of the array is calculated, and then the original and sorted arrays are printed for verification.

The output of the program will be:
